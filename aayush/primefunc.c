#include <stdio.h>
int isprime(int);
int main ()
{

	int n,flag;
	
	printf("enetr n");
	scanf("%d",&n);
	
	flag=isprime(n);
	if (flag==1)
	printf(" no is prime %d",n);

	else
	printf(" no is notprime %d",n);
return 0;
}

int isprime(int x)
{
	int i=2;
	while (i<=x)
	{
	if(x%i==0)
	break;
	else
	i++;
	}

	if (i==x)
	return 1;
	else
	return 0;
}
	

