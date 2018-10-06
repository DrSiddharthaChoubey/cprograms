#include<stdio.h>
int main()
{
float d,g;
printf("enter the late days in submitting the book=");
scanf("%f",&d);
if(d>=0&&d<=5)
{
g=d*0.5;
printf("your fine=%.2f",g);
}
else if(d>=6&&d<=10)
{
g=d*1;
printf("your fine=%.1f",g);
}
else if(d>=11&&d<=30)
{
g=d*5;
printf("ur fine=%.1f",g);
}
else if(d>30)
printf("u r not our member");
return 0;
}  
