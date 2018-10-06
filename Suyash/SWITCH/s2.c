#include<stdio.h>

int main()
{
int mon;

printf("\nEnter the month no. : ");
	scanf("%d",&mon);
	
printf("\nThe no. of days in this month is : ");
	switch(mon)
	{
		case 1 : printf("\n31");
					break;
		case 2 : printf("\n28");
					break;
		case 3 : printf("\n31");
					break;
		case 4 : printf("\n30");
					break;
		case 5 : printf("\n31");
					break;
		case 6 : printf("\n30");
					break;
		case 7 : printf("\n31");
					break;
		case 8 : printf("\n31");
					break;
		case 9 : printf("\n30");
					break;
		case 10 : printf("\n31");
					break;
		case 11 : printf("\n30");
					break;
		case 12 : printf("\n31");
					break;			
		default : printf("\n!!!WRONG month ENTERED!!!");
	}
printf("\n");
return 0;
}
