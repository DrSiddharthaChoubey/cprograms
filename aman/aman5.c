#include<stdio.h>
int main()
{
float ts,s,bs=3000,hra,da,c=500,i,b;
printf("enter your sale=");
scanf("%f",&s);
if(s>100000)
{
hra=.2*bs;
da=1.10*bs;
i=.1*s;
b=500;
ts=bs+hra+da+c+i+b;
printf("your total salary is=%f",ts);
}
else
{
hra=0.2*bs;
da=1.10*bs;
i=.05*s;
b=200;
ts=bs+hra+da+c+i+b;
printf("your total salary is=%f",ts);
}
return 0;
}


