/*write a program to find the sum of all even numbers b/w 1 to n*/


#include<stdio.h>
int main()
{
int i,n,sum=0;
printf("enter the value of n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%2==0)
{
sum=sum+i;
printf("sum=%d",sum);
}
}
return 0;
}
