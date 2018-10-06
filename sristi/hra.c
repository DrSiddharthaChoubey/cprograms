#include<stdio.h>
int main()
{
float bs=3000,ts,hra,da,bonus,ins,conv=500,salary;
hra=bs*20/100;
da=bs*110/100;
printf("enter the total sale");
scanf("%f",&ts);
if(ts>100000)
{
ins=ts*10/100;
bonus=500;
}
else{
ins=ts*5/100;
bonus=200;
}
salary=bs+hra+da+conv+ins+bonus;
printf("total salary=rs.%f\n",salary);
return 0;
}


