#include<stdio.h>
int main()
{
int a,n,sum=0;
printf("enter  the five digit number");
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
sum=sum+a;
printf("sum of five digit number=%d",sum);
return 0;
}
