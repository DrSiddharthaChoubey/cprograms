#include<stdio.h>
int main()
{
int a,b,c,d,e,f,n;
printf("enter the value of 5 digit=");
scanf("%d",&n);
a=n/10000;
a=a+1;
n=n%10000;
b=n/1000;
b=b+1;
n=n%1000;
c=n/100;
c=c+1;
n=n%100;
d=n/10;
d=d+1;
n=n%10;
e=n/1;
e=e+1;
n=10000*a+1000*b+100*c+10*d+1*e;
printf("the new no. is=%d",n);
return 0;
}

