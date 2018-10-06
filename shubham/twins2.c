#include<stdio.h>
int main(){
int bs,hra,da,gs;
printf("enter the basic salary of employee=");
scanf("%d",&bs);
if(bs<1500)
{
da=bs*20/100;
hra=bs*10/100;
}
else
{
da=bs*30/100;
hra=bs*20/100;
}
gs=bs+da+hra;
printf("the total salary of employee:%d",gs);
return 0;
}
