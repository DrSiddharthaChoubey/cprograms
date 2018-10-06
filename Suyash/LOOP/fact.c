//factorial of the no. entered

#include<stdio.h>

int main()
{

int n,i,fact=1;
printf("\nEnter no. of which the factorial is to be found : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		fact*=i;
	}

printf("\nfactorial of %d is : %d\n",n,fact);
return 0;

}
