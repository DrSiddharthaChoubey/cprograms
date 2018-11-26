#include<stdio.h>
int main()
{
unsigned int a=10;
int *p=&a;
printf("\n%d",a);
printf("\n%u",&a);
printf("\n%u",p);
printf("\n%u",&p);
printf("\n%d",*p);
printf("\n%u",*&p);
printf("\n%d",*&a);

return 0;
}

























