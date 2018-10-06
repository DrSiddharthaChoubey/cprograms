//Function to print patterns

#include <stdio.h>

void Pattern(int rows);

int main()
{
	Pattern(5);
	return 0;
}

void Pattern(int rows)
{
	int i,j;
	for(i=0;i<=rows;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" * ");		
		}
		printf("\n");	
	}
}

