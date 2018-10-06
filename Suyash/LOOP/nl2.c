#include<stdio.h>

int main()
{
int i,j,c,r;

printf("\nEnter the no. of rows :");
	scanf("%d",&r);

/*printf("\nEnter the no. of Columns : ");
	scanf("%d",&c);
*/
printf("\n");
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=r;j++)
			printf(" * ");
	printf("\n");	
	}

return 0;

}
