#include<stdio.h>

int main()
{

char ms,ge;
int age;

printf("\nEnter driver details.....");

printf("\nMarital Status (m/u): ");
	scanf("%c",&ms);
  //fflush(stdin);
printf("\nGender (m/f): ");
	scanf(" %c",&ge);

printf("\nAge : ");
	scanf("%d",&age);

	if(ms=='m')
		printf("\nDriver is Insured\n");

	else if(ms=='u')
	{ 
		if(ge=='m' && age>30)
				printf("\nDriver is Insured\n");
		else if(age>25)
				printf("\nDriver is Insured\n");
		else
				printf("\nDriver is not Insured\n");
	}	
	else
		printf("\nWrong Details Entered\n");	

return 0;
}
