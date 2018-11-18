#include<stdio.h>
int main()
{
 int i,j,k,l,z,q,w,e,n;
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
 }

 for(z=1;z<=n;z++)
 {
  for(q=1;q<=z;q++)
  printf(" ");

  for(w=z;w<n;w++)
  printf("*");

  for(e=z;e<(n-1);e++)
  printf("*");

  printf("\n");
 }

 return 0;
}
