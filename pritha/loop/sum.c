/*write a c program to calculate sum of digits of a number*/
#include<stdio.h>
int main()
{
int n1,n,sum=0,a;
printf("enter the number");
scanf("%d",&n);
n1=n;
while(n1>0)
{
a=n1%10;
sum=sum+a;
n1=n1/10;
}
printf("sum of digits %d=%d",n,sum);
return 0;
}
