//Multiplication table of n
// !!!! program inclomplete !!!!!
#include<stdio.h>

int main()
{

int n,i=1,mul=0;
printf("\nEnter no. you want table of : ");
	scanf("%d",&n);

printf("\nThe multiplication table of %d is: \n",n);
	while(i<=n)
	{
		sum+=i;
		i++;
	}

printf(" %d\n",sum);
return 0;

}
