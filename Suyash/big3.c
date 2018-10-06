#include<stdio.h>

int main()
{
int a,b,c,big;

printf("\nEnter the value of a : ");
	scanf("%d",&a);

printf("\nEnter the value of b : ");
	scanf("%d",&b);

printf("\nEnter the value of c : ");
	scanf("%d",&c);

	if(a>b && a>c)
		big=a;
	if(b>a && b>c)
		big=b;
	if(c>b && c>a)
		big=c;
	
printf("\nThe largest no. is : %d\n",big);

return 0;
}
