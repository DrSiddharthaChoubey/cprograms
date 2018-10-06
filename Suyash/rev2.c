#include<stdio.h>

int main()
{
int num,rev=0;

printf("\nEnter the 5 digit number :- ");	
	scanf("%d",&num);

	rev=(rev*10)+(num%10);
	num=num/10;

	rev=(rev*10)+(num%10);
	num=num/10;

	rev=(rev*10)+(num%10);
	num=num/10;

	rev=(rev*10)+(num%10);
	num=num/10;

	rev=(rev*10)+(num%10);
	num=num/10;

printf("\nThe reversed number is : %d\n",rev);

return 0;
}
