#include<stdio.h>
int main()
{
int i,n,sum=0;
printf("enter the end point for sum of natural no.s");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%2==0)
sum=sum+i;
}printf("%d\t",sum);

return 0;
}
