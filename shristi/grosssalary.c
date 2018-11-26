#include<stdio.h>
int main()
{
float bs,da,hra,gs;
printf("enter the basic salery");
scanf("%f",&bs);
if(bs<1500)
{
da=bs*20/100;
hra=bs*10/100;
}
else
{
da=bs*40/100;
hra=bs*20/100;
}
gs=bs+da+hra;
printf("\n gross salery=%f",gs);
return 0;
}
