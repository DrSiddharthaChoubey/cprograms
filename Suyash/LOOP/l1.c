//print all natural no. b/w 1 & n using while loop 

#include<stdio.h>

int main()
{

int n,i=1;
printf("\nEnter no. till you want natural no. to be printed : ");
	scanf("%d",&n);
	
printf("\nNatural nos b/w 1 and %d are : ",n);
	while(i<=n)
	{
		printf(" %d ",i);
		i++;
	}

printf("\n");
return 0;

}
