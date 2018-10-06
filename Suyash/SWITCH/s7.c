#include<stdio.h>

int main()
{
int num,x;

printf("\nEnter a number : ");
	scanf("%d",&num);

	switch(x=num>0)
	{
		case 0 : switch(num)
					{
						case 0 : printf("\nno. enterd is 0");
									break;
						default : printf("\nNo. Entered is negative");
					}
					break;
		case 1 : printf("\nNo. Entered is positive");
					break;
	}
printf("\n");
return 0;
}
