#include<stdio.h>

int main()
{
int i,j,s,n;

printf("\nEnter the no. of rows");
	scanf("%d",&n);


printf("\nRequired Pattern is : \n");

	for(i=1;i<=n;i++)
	{
	s=n;
		for(j=1;j<=i;j++)
			printf("%d ",s--);
	printf("\n");	
	}

return 0;

}
