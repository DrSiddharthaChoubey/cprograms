#include<stdio.h>
int main()
{
float da,bs,hra,gs;
printf("enter the ramesh basic salary");
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
gs=hra+da+bs;
printf("gross salary=%f",gs);
return 0;
}

