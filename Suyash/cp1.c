#include<stdio.h>

int main()
{

float sp,pr,cp1;

printf("\nEnter selling price of 15 items : ");
	scanf("%f",&sp);

printf("\nEnter profit obtained from 15 items : ");
	scanf("%f",&pr);

	cp1=(sp-pr)/15;

printf("\nCost Price of one item is : %5.2f\n",cp1);

return 0;
}
