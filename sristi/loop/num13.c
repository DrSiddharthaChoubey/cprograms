#include<stdio.h>
int main()
{
 int i,j,n,k,s;
 printf("Enter the number of rows and columns=");
 scanf("%d",&n);

 s=n;

 for(i=1;i<=n;i++)
 {
  for(j=n;j>i;j--)
  printf(" ");

  for(k=1;k<=i;k++)
  printf("%d",s);
  printf("\n");
  s--;
 }

 return 0;
}
