#include <stdio.h>
#include "add.h"
int main ()
{
	int a,b,c;
	printf("enter value a&b");
	scanf("%d%d",&a,&b);
	c=add(a,b);
	printf("sum is %d",c);
return 0;
}
