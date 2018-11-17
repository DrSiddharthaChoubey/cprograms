#include<stdio.h>

int main()
{
int day;
float fine;

printf("\nEnter no. of days late : ");
	scanf("%d",&day);

	if(day>=0 && day<=5)
	{
		fine=day*0.5;
		printf("\nFine is : %.2f\n",fine);	
	}

	else if(day>=6 && day<=10)
	{
		fine=day*1;
		printf("\nFine is : %.2f\n",fine);
	}

	else if(day>10 && day<=30)
	{
		fine=day*5;
		printf("\nFine is : %.2f\n",fine);
	}
	else if(day>30)
		printf("\n!!!MEMBERSHIP CANCELLED!!!\n");

return 0;
}
