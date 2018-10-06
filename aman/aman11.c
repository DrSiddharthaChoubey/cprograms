#include<stdio.h>
int main()
{
float sp,cp,p;

printf("enter the cost price and selling price of item=");
scanf("%f%f",&sp,&cp);
p=cp-sp;
if(p>0)
{
printf("your profit=%f",p);
}
else
{
printf("your loss=%f",p);
}
return 0;
}

