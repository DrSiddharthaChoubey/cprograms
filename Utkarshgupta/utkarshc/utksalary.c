#include<stdio.h>
int main(){
float salary,sale,convence=500,hra,da,basic=3000,incentives,bonus;
//table 1

printf("enter sale");
scanf("%f",sale);
hra=0.2*sale;
da=1.1*basic;
if (sale>100000){
incentives=0.1*sale;
salary=basic+hra+da+convence+incentives+bonus;
printf("\nsalary is=%f",salary);}
else{
incentives=0.05*sale;
bonus=200;
salary=basic+hra+da+convence+incentives+bonus;
printf("\nsalary is=%f",salary);}
return 0;}




