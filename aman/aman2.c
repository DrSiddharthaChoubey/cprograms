#include<stdio.h>
int main()
{
float bs,da,hra,gs;
printf("Enter Rameshs basic salary");
scanf("%f",&bs);
da=bs*40/100;
hra=bs*20/100;
gs=da+hra+bs;
printf("Gross salary=%f",gs);
return 0;
}
