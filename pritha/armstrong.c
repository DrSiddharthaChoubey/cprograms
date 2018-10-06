#include<stdio.h>
int main()
{
int n,x,a,s=0;
printf("enter three digit number");
scanf("%d",&n);
x=n;
a=n%10;
n=n/10;
s=s+(a*a*a);
a=n%10;
n=n/10;
s=s+(a*a*a);
if(s==x)
{
printf("number is armstrong");
}
else
{
printf("number is not armstrong");
}
return 0;
}


