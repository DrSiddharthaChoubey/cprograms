#include<stdio.h>

int main()
{

int s1,s2,s3;

printf("\nEnter side 1 of triangle : ");
	scanf("%d",&s1);
printf("\nEnter side 2 of triangle : ");
	scanf("%d",&s2);
printf("\nEnter side 3 of triangle : ");
	scanf("%d",&s3);

	if(s1>s2 && s1>s3)
	{
		if((s2+s3)>s1) 
			printf("\nTriangel is VALID\n");
		else
			printf("\nTriangel is INVALID\n");
	}

	else if(s2>s1 && s2>s3)
	{
		if((s2+s3)>s2) 
			printf("\nTriangel is VALID\n");
		else
			printf("\nTriangel is INVALID\n");
	}

	else if(s3>s2 && s3>s1)
	{
		if((s2+s3)>s3) 
			printf("\nTriangel is VALID\n");
		else
			printf("\nTriangel is INVALID\n");
	}		


return 0;
}
