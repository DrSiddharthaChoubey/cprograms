#include<stdio.h>

int main()
{
int i,j,n;

printf("\nEnter the no. of rows");
	scanf("%d",&n);

printf("\nRequired Pattern is : \n");

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			printf(" * ");
	printf("\n");	
	}

return 0;

}
