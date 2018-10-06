#include<stdio.h>
int main()
{
int n,n1,a,sum=0;
printf("enter the 5 digit no=");
scanf("%d",&n);
n1=n;
a=n%10;
n=n/10;
sum=sum+10000*a;
a=n%10;
n=n/10;
sum=sum+1000*a;
a=n%10;
n=n/10;
sum=sum+100*a;
a=n%10;
n=n/10;
sum=sum+10*a;
a=n%10;
n=n/10;
sum=sum+1*a;
printf("the reverse no=%d",sum);
if(sum==n1)
printf("number is same");
else
printf("number is nt same");
return 0;
}
