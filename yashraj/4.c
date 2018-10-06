#include<stdio.h>
int main()
{
int n,a,sum=0;
printf("enter the five digit no:");
scanf("%d",&n);
a=n%10;
n=n/10;
sum=sum+a;
a=n%10;
n=n/10;
sum=sum+a;
a=n%10;
n=n/10;
sum=sum+a;
a=n%10;
n=n/10;
sum=sum+a;
a=n%10;
n=n/10;
sum=sum+a;
printf("\nsum of digits=%d",sum);
return 0;
}
