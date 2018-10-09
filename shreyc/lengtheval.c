#include<stdio.h>
int main()
{
float km,m,ft,in;
printf("\nenter distance in KM:");
scanf("%f",&km);
	m=km*1000;
	cm=km*100000;
	ft=km*3280.84;
	in=km*39370.1;
printf("\nDistance in metres=%7.2f",m)
printf("\nDistance in centi metres=%7.2f",cm)
printf("\nDistance in feet=%7.2f",ft)
printf("\nDistance in inches=%7.2f\n",in)
