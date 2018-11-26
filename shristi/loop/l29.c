/* WAP to print the structure*/


#include<stdio.h>
int main()
{
int i,n,j,k,l,s;
printf("enter the number of row");
scanf("%d",&n);

for(i=1;i<=n;i++)
 {
   s=n;
  for(j=n;j>i;j--)
   printf("*");
  for(k=1;k<=i;k++)
   printf(" ");
  printf("\n");
 }
return 0;
}
