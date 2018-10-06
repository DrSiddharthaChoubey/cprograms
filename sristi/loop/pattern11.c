#include<stdio.h>
int main()
{
 int i,j,k,l,q,w,e,n;
 printf("Enter the number of rows and columns=");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
 {
  for(j=n;j>i;j--)
  printf(" ");

  for(k=1;k<=i;k++)
  printf("*");

  for(l=1;l<i;l++)
  printf("*");
  printf("\n");

  for(q=1;q<i;q++)
  printf(" ");

 for(w=i;w<=n;w++)
  printf("*");

  for(e=i;e<n;e++)
  printf("*");

  printf("\n");
 } 

 return 0;
}
