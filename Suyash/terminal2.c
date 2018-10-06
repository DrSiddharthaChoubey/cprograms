#include<stdio.h>

int main()
{

float sal;
printf("\nEnter the Salary : ");
	scanf("%f",&sal);

(sal<=40000 && sal>=25000)?printf("\nManager\n"):((sal<=25000 && sal>=15000)?printf("\nAccountant\n"):printf("\nClerk\n"));

return 0;
}
