#include<stdio.h>

int main()
{

int num,a,sum=0;
printf("\nEnter the five digit number :- ");
	scanf("%d",&num);
	a=num%10;
	num=num/10;
	sum=sum+a;

	a=num%10;
	num=num/10;
	sum=sum+a;

	a=num%10;
	num=num/10;
	sum=sum+a;

	a=num%10;
	num=num/10;
	sum=sum+a;

	a=num%10;
	num=num/10;
	sum=sum+a;

	a=num%10;
	sum=sum+a;

	printf("\nSum of the five digits of the input number is : %d\n",sum);

return 0;

}
