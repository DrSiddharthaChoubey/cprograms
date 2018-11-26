/* WAP to print the structure*/


#include<stdio.h>
int main()
{
int i,n,j,k,l,s;
printf("enter the number of row");
scanf("%d",&n);

for(i=1;i<=n;i++)
 {
   s=1;
  for(j=n;j>i;j--)
   printf(" ");
  for(k=1;k<=i;k++)
   printf("%d",s++);
  s=s-1;
  for(l=1;l<i;l++)
   printf("%d",--s);
  printf("\n");
 }
return 0;
}
