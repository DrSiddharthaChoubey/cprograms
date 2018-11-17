#include<stdio.h>

//Swaping

int main()
{

int C,D,temp;
printf("\nEnter value for C :- ");
	scanf("%i",&C);
printf("\nEnter value for D :- ");
	scanf("%i",&D);

	C=C^D;
	D=C^D;
	C=C^D;

printf("\nResult after Swaping... \nC=%i D=%i\n",C,D);

return 0;
}
