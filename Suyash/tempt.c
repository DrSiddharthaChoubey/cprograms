#include<stdio.h>

int main()
{
float tc,tf;
printf("\nEnter Temprature in Farenheit : ");
	scanf("%f",&tf);
	tc=5.0/9.0*(tf-32);
printf("\nTemprature in Celcius : %3.2f\n",tc);

return 0;
}
