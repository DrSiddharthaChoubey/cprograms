#include<stdio.h>

int main()
{
float bs,da,hra,gr;

scanf("%f",&bs);
da=bs*40/100;
hra=bs*20/100;
gr=bs+da+hra;
printf("da=%f hra=%f gr=%f",da,hra,gr);
return 0;
}
