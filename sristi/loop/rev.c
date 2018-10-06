#include<stdio.h>
int main()
{
int n,i,rev=0,a,n1;
printf("enter the number");
scanf("%d",&n);
n1=n;
while(n1>0)
{
a=n1%10;
rev=a+rev*10;
n1=n1/10;
}
printf("rev digit %d=%d",n,rev);
return 0;
}
