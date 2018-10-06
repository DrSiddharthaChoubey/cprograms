#include<stdio.h>
int main()
{
 int i,j,n;
 printf("Enter the number of rows and columns=");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
 {
  for(j=n;j>=1;j--)
  printf("%d",j);
  printf("\n");
 }

 return 0;
}
