#include<stdio.h>
int main()
{int sal;
scanf("%d",&sal);
sal=(sal>25000&&sal<40000)?printf("manager"):(sal>15000&&sal<25000)?printf("accountant"):printf("clerk");
return 0;
}
