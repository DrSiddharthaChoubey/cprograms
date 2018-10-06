#include<stdio.h>

int main()
{
int day;

printf("\nEnter the day of the week : ");
	scanf("%d",&day);
	
printf("\nThe day is : ");
	switch(day)
	{
		case 1 : printf("\nMONDAY");
					break;
		case 2 : printf("\nTUESDAY");
					break;
		case 3 : printf("\nWEDNESDAY");
					break;
		case 4 : printf("\nTHURSDAY");
					break;
		case 5 : printf("\nFRIDAY");
					break;
		case 6 : printf("\nSATURDAY");
					break;
		case 7 : printf("\nSUNDAY");
					break;
		default : printf("\n!!!WRONG DAY ENTERED!!!");
	}
printf("\n");
return 0;
}
