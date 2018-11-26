#include<stdio.h>
int main()
{
int a=10;
int *p=&a;
printf("\n%u",&a);
printf("\n%d",a);
printf("\n%d",p);
printf("\n%u",&p);
printf("\n%u",*&p);
printf("\n%d",*p);
printf("\n%d",*&a);
return 0;
}
