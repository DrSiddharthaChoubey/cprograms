#include<stdio.h>
int main()
{
float bs=3000,hra,da,con,in,bn,ts,salary;
printf("enter the total sale");
scanf("%f",&ts);
hra=bs*20/100;
da=bs*110/100;
con=500;
if(ts>100000)
{
in=ts*10/100;
bn=500;
}
else
{
in=ts*5/100;
bn=200;
}
salary=bs+hra+da+con+in+bn;
printf("\nbasic salary=%f",bs);
printf("\ndearness allowance=%f",da);
printf("\nhouse rent allowance=%f",hra);
printf("\nconvence allowance=%f",con);
printf("\nincentive allowance=%f",in);
printf("\nbonus=%f",con);
printf("\ntotal salary=%f\n",salary);
return 0;
}
