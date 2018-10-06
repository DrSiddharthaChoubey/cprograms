#include<stdio.h>
int main()
{
int n,i,sum=0,a,n1;
printf("enter the number");
scanf("%d",&n);
n1=n;
while(n1>0)
{
a=n1%10;
sum=sum+a;
n1=n1/10;
}
printf("sum of digit %d=%d",n,sum);
return 0;
}
