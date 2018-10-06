#include<stdio.h>

int main()
{

int a,b,big;

printf("\nEnter the value of A : ");
	scanf("%d",&a);

printf("\nEnter the value of B : ");
	scanf("%d",&b);

big=a>b?a:b;

printf("\nBiggest among them is : %d\n",big);

/*a>b?printf("\nBiggest among them is : %d\n",a):printf("\nBiggest among them is : %d\n",b);

*/
return 0;

}
