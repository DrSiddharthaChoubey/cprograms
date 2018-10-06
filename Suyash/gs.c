#include<stdio.h>

int main()
{
float bs,hra,da,gs;

printf("\nEnter Basic Salary : ");
	scanf("%f",&bs);

	if(bs<1500)
	{
		da=bs*20/100;
		hra=bs*10/100;
	}
	else
	{
		da=bs*40/100;
		hra=bs*20/100;
	}

	gs=bs+da+hra;

printf("\nGross Salary : %8.2f\n",gs);

return 0;
}
