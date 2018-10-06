#include<stdio.h>
int main()
{
int i,j,n,k,l,s;
printf("enter the no of rows");
scanf("%d",&n);
s=1;
for(i=1;i<=n;i++)
{
  for(j=1;j<i;j++)
  printf(" ");
for(k=i;k<=n;k++)
  printf("%d",s++);
for(l=i;l<n;l++)
  printf("%d",s++);
printf("\n");
}
return 0;
}
