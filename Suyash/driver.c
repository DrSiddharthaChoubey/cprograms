#include<stdio.h>

int main()
{

int ms,ge,age;

printf("\nEnter driver details.....");

printf("\nMarital Status : \n1 for married \n2 for unmarried : ");
	scanf("%d",&ms);

printf("\nGender : \n1 for male \n2 for female : ");
	scanf("%d",&ge);

printf("\nAge : ");
	scanf("%d",&age);


	if(ms==1)
		printf("\nDriver is Insured\n");


	else
	{
		if(ge==1)
		{
			if(age>=30)
				printf("\nDriver is Insured\n");
			else
				printf("\nDriver is not insured\n");
		}
		else
		{
			if(age>=25)
				printf("\nDriver is Insured\n");
			else
				printf("\nDriver is not insured\n");	 			}
		
	}


return 0;
}
