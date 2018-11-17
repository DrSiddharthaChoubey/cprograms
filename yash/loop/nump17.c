#include<stdio.h>
int main()
{
 int i,j,k,l,z,q,w,e,n,s;
 printf("Enter the number of rows and columns=");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
 {
  s=1;

  for(j=n;j>i;j--)
  printf(" ");

  for(k=1;k<=i;k++)
  printf("%d",s++);

  for(l=1;l<i;l++)
  printf("%d",s++);

  printf("\n");
 }

 for(z=1;z<=n;z++)
 {
  s=1;

  for(q=1;q<=z;q++)
  printf(" ");

  for(w=z;w<n;w++)
  printf("%d",s++);

  for(e=z;e<(n-1);e++)
  printf("%d",s++);

  printf("\n");
 }

 return 0;
}
