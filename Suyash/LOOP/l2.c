//print all natural no. b/w n & 1 using while loop 

#include<stdio.h>

int main()
{

int n,i=1;
printf("\nEnter no. till you want natural no. to be printed : ");
	scanf("%d",&n);
i=n;
printf("\nNatural nos b/w %d and 1 are : ",n);
	while(i>=1)
	{
		printf(" %d ",i);
		i--;
	}

printf("\n");
return 0;

}
