#include<stdio.h>
int main()
{
 float bs=3000,ts,hra,da,bonus,ins,conv=500,salary;

 hra=bs*20/100;
 da=bs*110/100;

 printf("Enter the total salary=Rs.");
 scanf("%f",&ts);

 if(ts>100000)
 {
  ins=ts*10/100;
  bonus=500;
 }

 else
 {
  ins=ts*5/100;
  bonus=200;
 }

 salary=bs+hra+da+conv+ins+bonus;
 printf("Total salary=Rs.%.2f\n",salary);

 return 0;
}
