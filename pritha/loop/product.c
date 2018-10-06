/*write a c program to calculate product of digits of a number*/
#include<stdio.h>
int main()
{
int n1,n,prod=1,a;
printf("enter the number");
scanf("%d",&n);
n1=n;
while(n1>0)
{
a=n1%10;
prod=prod*a;
n1=n1/10;
}
printf(" product of digits %d=%d",n,prod);
return 0;
}
