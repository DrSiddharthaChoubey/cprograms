#include<stdio.h>

int main()
{
int a,b,c,big;

printf("\nEnter the value of a : ");
	scanf("%d",&a);

printf("\nEnter the value of b : ");
	scanf("%d",&b);

printf("\nEnter the value of c : ");
	scanf("%d",&c);

	if(a>b)
	{
		if(a>c)
			big=a;
		else
			big=c;
	}

	else
	{
		if(b>c)
			big=b;
		else
			big=c;
	}

printf("\nThe largest no. is : %d\n",big);

return 0;
}
