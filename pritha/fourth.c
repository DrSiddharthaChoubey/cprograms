#include<stdio.h>
int main()
{
float km,m,cm,inch,feet;
printf("enter the distance in km");
scanf("%f",&km);
m=km*1000;
cm=m*100;
inch=cm/2.54;
feet=inch/12;
printf("distance in kilometer =%f",km);
printf("distance in meter =%f",m);
printf("diatance in centimeter=%f",cm);
printf("distance in inches=%f",inch);
printf("distance in feet=%f",feet);
return 0;
}
