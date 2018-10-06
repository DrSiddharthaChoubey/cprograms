#include<stdio.h>
int main()
{
float sale,basic,hra,da,incentive,bonus,conveyance,totalsalary;
printf("enter the sale value=");
scanf("%f",&sale);
basic=3000;
hra= .2*basic;
da=1.1*basic;
conveyance=500;
if(sale>100000)
{

incentive=.1*sale;
bonus=500;
}
else
{

incentive=.05*sale;
bonus=200;
}
totalsalary=basic+hra+da+conveyance+incentive+bonus;
printf("total salary of worker=%f",totalsalary);
return 0;
}

 
