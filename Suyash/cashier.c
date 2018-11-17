#include<stdio.h>

int main()
{

int noh,nof,not,amt;

printf("\nEnter the amount : ");
	scanf("%d",&amt);

	noh=amt/100;
	amt=amt-noh*100;
	
	nof=amt/50;
	amt=amt-nof*50;
	
	not=amt/10;

printf("\nNOH=%d NOF=%d NOT=%d\n",noh,nof,not);

return 0;
}
