//print all odd no. b/w 1 & 100 using while loop 

#include<stdio.h>

int main()
{

int n,i=1;

printf("\nOdd nos b/w 1 and 100 are : \n");
	while(i<=100)
	{
		if(i%2!=0)
			printf(" %d ",i);
		i++;
	}

printf("\n");
return 0;

}
