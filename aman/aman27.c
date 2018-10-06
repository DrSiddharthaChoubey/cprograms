#include<stdio.h>
int main()
{
float sal;
printf("enter your salary=");
scanf("%f",&sal);
sal<40000&&sal>25000?printf("Manager"):(sal>15000&&sal<25000?printf("Accountant"):printf("clerk"));
return 0;
}
