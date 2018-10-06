#include<stdio.h>
int main ()
{
float  bs,hr,gs,da;
printf("enter the bs");
scanf("%f",bs);

if(bs<1500)
{
    da=bs*10/100;
 hr=bs*20/100;
}
else
{
da=bs*40/400;
hr=bs*20/100;
}
gs=bs+hr+da;
printf("%d%d%d%d",bs,da,hr,gs);
return 0;
}
