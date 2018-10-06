#include<stdio.h>

int main()
{
float bs,da,hra,gs;
printf("\nEnter Basic Salary of Ramesh : ");
scanf("%f",&bs);
	da=bs*40/100;
	hra=bs*20/100;
	gs=bs+da+hra;
	printf("\nGross Salary pf Ramesh is :%10.2f\n\n",gs);
return 0;
}
