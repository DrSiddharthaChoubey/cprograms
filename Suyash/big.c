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

	if(a>b && a>c)
		 big=a;
	else if(b>c)
		 big=b;
	else
		 big=c;
	

printf("\nThe largest number is : %d\n",big);

return 0;
}
