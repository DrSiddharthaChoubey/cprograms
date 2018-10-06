#include<stdio.h>
int main()
{
 int i,j,n,k,s;
 printf("Enter the number of rows and columns=");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
 {
  s=n;
  for(j=n;j>i;j--)
  printf(" ");

  for(k=1;k<=i;k++)
  printf("%d",s--);
  printf("\n");
 }

 return 0;
}
