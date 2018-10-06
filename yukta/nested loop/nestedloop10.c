#include<stdio.h>
int main()
{
int i,j,n,s;
printf("enter the no of rows");
scanf("%d",&n);
s=n;
for(i=1;i<=n;i++)
{
  for(j=n;j>=i;j--)
  printf("%d",s);
s=s-1;
printf("\n");
}
return 0;
}
