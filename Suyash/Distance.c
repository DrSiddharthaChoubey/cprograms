#include<stdio.h>

int main()
{
float km,m,cm,ft,in;

printf("\nEnter distance in KM : ");
scanf("%f",&km);
	m=km*1000;
	cm=km*100000;
	ft=km*3280.84;
	in=km*39370.1;
printf("\nDistance in meters : %7.2f",m);
printf("\nDistance in centi meters : %7.2f",cm);
printf("\nDistance in feet : %7.2f",ft);
printf("\nDistance in inches : %7.2f\n",in);

return 0;
}
