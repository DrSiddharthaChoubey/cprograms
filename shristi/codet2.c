#include<stdio.h>
int main()
{
float salary;
printf("enter salary");
scanf("%f",&salary);
salary<40000&&salary>25000?printf("manager"):(salary<25000&&salary>15000?printf("accountant"):printf("clerk"));
return 0;
}
