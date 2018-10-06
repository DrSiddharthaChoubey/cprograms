#include<stdio.h>
int main()
{
int n,i,product=1,a,n1;
printf("enter the number");
scanf("%d",&n);
n1=n;
while(n1>0)
{
a=n1%10;
product=product*a;
n1=n1/10;
}
printf("product of digit %d=%d",n,product);
return 0;
}
