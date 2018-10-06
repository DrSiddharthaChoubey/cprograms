#include<stdio.h>

int main()
{
int a,b,x;

printf("\nEnter a : ");
	scanf("%d",&a);

printf("\nEnter b : ");
	scanf("%d",&b);

	switch(x=a>b)
	{
		case 0 : printf("\nb is Maximum");
					break;
		case 1 : printf("\na is Maximum");
					break;
		default : printf("\na is equal to b");
	}
printf("\n");
return 0;
}
