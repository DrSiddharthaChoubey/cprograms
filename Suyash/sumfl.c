#include<stdio.h>

int main()
{
int num,a,sum=0;

printf("\nEnter a four digit number :- ");
	scanf("%d",&num);

	a=num%10;
	num=num/10;
	sum=sum+a;

	num=num/100;	
	a=num%100;
	sum=sum+a;

	printf("\nFirst and last digit sum =%d\n",sum);

return 0;
}
