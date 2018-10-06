//Function to tell a number is prime or not

#include <stdio.h>

int isPrime(int number);

int main()
{
	if(isPrime(2))
	{
		printf("prime \n");	
	}
	
	else
	{
		printf("not prime \n");
	}
	
	return 0;
}

int isPrime(int number)
{	
	int i,prime = 1;

	for(i = 2; i < x ;i++)
	{
		if( x%i == 0)
		{
			prime = 0;		
		}		
	}

	return prime;
}
