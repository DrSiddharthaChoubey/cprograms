#include<stdio.h>
int main()
{
int sp,cp,p;
float cppu;
printf("enter the selling price and profit");
scanf("%d%d",&sp,&p);
cp=sp-p;
cppu=cp/15;
printf("cost price=%d",cp);
printf("cost price per unit=%f",cppu);
return 0;
}

