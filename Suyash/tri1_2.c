#include<stdio.h>

int main()
{

int s1,s2,s3,big,sum;

printf("\nEnter side 1 of triangle : ");
	scanf("%d",&s1);
printf("\nEnter side 2 of triangle : ");
	scanf("%d",&s2);
printf("\nEnter side 3 of triangle : ");
	scanf("%d",&s3);

	if(s1>s2)
	{
		if(s1>s3)
		{
			big=s1;
			sum=s2+s3;
		}
		else
		{
			big=s3;
			sum=s2+s1;
		}
	}

	else
	{
		if(s2>s3)
		{
			big=s2;
			sum=s1+s3;
		}
		else
		{
			big=s3;
			sum=s2+s1;
		}
	}


	if(sum>big)
		printf("\nTriangle is VALID\n");
	else
		printf("\nTriangle is INVALID\n");


return 0;
}
