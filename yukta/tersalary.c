#include<stdio.h>
int main()
{
float sal;
printf("enter the salary");
scanf("%f",&sal);
(sal<40000&&sal>25000)?printf("manager"):((sal<25000&&sal>15000)?printf("accountant"):printf("clerk"));
return 0;
}
