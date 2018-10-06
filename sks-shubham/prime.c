#include<stdio.h>

int prime(int);

int main()
{
	int a,b;
	
	printf("Enter the no.:");
	scanf("%d",&a);
	
	if(prime(a))
		printf("it is prime");
	else
		printf("not a prime");
		
	return 0;
}

int prime(int a)
{
	for(int i=2;i<a/2;i++)
		if(a%i==0)
			return 0;
	return 1;
}
