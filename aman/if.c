#include<stdio.h>
int main()
{
int bs,hra,da,gs;
printf("enter the basic salary=");
scanf("%d",&bs);
if(bs<2500)
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
printf("the gross salary=%d",gs);
return 0;
}
