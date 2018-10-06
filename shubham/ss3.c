#include<stdio.h>
int main()
{
float hrs;
printf("no of hrs of wroking=");
scanf("%f",&hrs);
if(hrs>=2&&hrs<=3)
printf("worker is highly efficent");
else if(hrs>3&&hrs<=4)
printf("workers is to improve speed");
else if(hrs>4&&hrs<=5)
printf("worker will be given training");
else 
printf("the worker will be suspended");
return 0;
}
