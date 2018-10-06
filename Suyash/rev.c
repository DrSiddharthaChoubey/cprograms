#include<stdio.h>

int main()
{
int num,a,rev=0;

printf("\nEnter the 5 digit number :- ");
	scanf("%d",&num);

	a=num%10;
	num=num/10;
	rev=rev+a*10000;

	a=num%10;
	num=num/10;
	rev=rev+a*1000;

	a=num%10;
	num=num/10;
	rev=rev+a*100;

	a=num%10;
	num=num/10;
	rev=rev+a*10;

	a=num%10;
	num=num/10;
	rev=rev+a*1;

printf("\nReversed number = %d\n",rev);

return 0;

}
