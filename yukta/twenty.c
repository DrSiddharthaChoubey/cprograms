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
printf("\nhouse rent allowamce=%f",hra);
printf("\ndearness allowance=%f",da);
printf("\nconvence=%f",con);
printf("\nincentive=%f",in);
printf("\nbonus=%f",bn);
printf("\ntotal salary=%f\n",salary);
return 0;
}
