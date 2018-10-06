#include <stdio.h>
void pattern(int);
int main ()
{

	int p,n;
	printf("enetr n");	
	scanf("%d",&n);

	p=pattern (n);
	return 0;
}

void pattern (int x)
{
	int i,j;

	for (i=1;i<=n;i++)
	{	for (j=1;j<=n;j++){
		printf("*");}
	printf ("\n");}

		
