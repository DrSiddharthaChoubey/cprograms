#include<stdio.h>
int main()
{
int a,n,sum=0;
printf("enter the four digit no:");
scanf("%d",&n);
a=n%10;
sum=sum+a;
a=n%1233;
sum=sum+a;
printf("sum=%d",sum);
return 0;
}

