#include <stdio.h>

void add();
int main ()
{

	printf("addition of two nos.");

	add();

	return 0;
}

void add()
{
	int a,b,c;

	printf("enter a and b");

	scanf("%d%d",&a,&b);

	c=a+b;

	printf("%d",c);
}
