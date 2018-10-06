#include<stdio.h>
int main()
{
float bs,da,hra,gs;
printf("enter the salary:");
scanf("%f",&bs);
if(bs<=1500)
{
da=bs*20/100;
hra=bs*10/100;

}

else
{da=bs*40/100;
hra=bs*20/100;

}
gs=bs+da+hra;
printf("gs=%f",gs);

return 0;
}

