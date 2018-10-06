#include<stdio.h>
int main()
{
float hrs;
printf("write ur time required to complete project=");
scanf("%f",&hrs);
if(hrs>=2&&hrs<=3)
printf("u r highly efficient");
else if(hrs>3&&hrs<=4)
printf("u need to improve");
else if(hrs>4&&hrs<=5)
printf("u need to get train");
else if(hrs>5)
printf("u r out");
return 0;
}
