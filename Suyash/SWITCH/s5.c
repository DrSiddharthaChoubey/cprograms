#include<stdio.h>

int main()
{
int num,x;

printf("\nEnter a number : ");
	scanf("%d",&num);

	switch(x=num%2)
	{
		case 0 : printf("\nEntered number is Even");
					break;
		case 1 : printf("\nEntered number is odd");
					break;
	}
printf("\n");
return 0;
}
