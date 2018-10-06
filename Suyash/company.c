#include<stdio.h>

int main()
{
float hrs;

printf("\nEnter time taken by the eemployee : ");
	scanf("%f",&hrs);
	
	if(hrs>=2 && hrs<=3)
		printf("\nEmployee is Highly efficient\n");

	else if(hrs>=3 && hrs<=4)
		printf("\nEmployee is Advised to improve his speed\n");

	else if(hrs>=+4 && hrs<=5)
		printf("\nEmployee is to be Given training to improve speed\n");
	
	else if(hrs>=5)
		printf("\nThe employee has to LEAVE THE COMPANY\n");


return 0;
}
