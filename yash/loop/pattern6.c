#include<stdio.h>
int main()
{
 int i,j,k,l,n;
 printf("Enter the number of rows and columns=");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
 {
  for(j=1;j<i;j++)
  printf(" ");

  for(k=1;k<=n;k++)
  printf("*");

  for(l=1;l<n;l++)
  printf("*");

  printf("\n");
 }

 return 0;
}
