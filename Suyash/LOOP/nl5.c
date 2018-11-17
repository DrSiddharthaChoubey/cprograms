#include<stdio.h>

int main()
{
int i,j,n;

printf("\nEnter the no. of rows");
	scanf("%d",&n);


printf("\nRequired Pattern is : \n");

	for(i=1;i<=n;i++)
	{
		for(j=n;j>=1;j--)
			printf("%d ",j);
	printf("\n");	
	}

return 0;

}
