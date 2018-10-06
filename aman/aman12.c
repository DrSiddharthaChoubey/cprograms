#include<stdio.h>
int main()
{
int n1,n,a,sum=0;
printf("enter the 5 digit no.=");
scanf("%d",&n);
n1=n;
a=n%10;
n=n/10;
sum=sum+a*10000;
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
printf("the reverse term is=%d",sum);
if(sum==n1)
printf("the no. is same");
else
printf("the no. is not same");
return 0;
}


