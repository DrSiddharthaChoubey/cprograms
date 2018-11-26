#include<stdio.h>
int main()
{
int n,x,a,s=0;
printf("enter number");
scanf("%d",&n);
x=n;
a=n%10;
n=n/10;
s=s+(a*a*a);
a=n%10;
n=n/10;
s=s+(a*a*a);
a=n%10;
n=n/10;
s=s+(a*a*a);
if(s==x)
printf("no is armstrong");
else
printf("its not");
return 0;
}
