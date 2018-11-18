#include<stdio.h>
int main()
{
 int a=10,b=20;
 int *p1,*p2;

 p1=&a;
 p2=&b;

 printf("%u\n\n",a);
 printf("%u\n\n",b);
 printf("%u\n\n",p1);
 printf("%u\n\n",p2);
 printf("%d\n\n",*p1);
 printf("%d\n\n",*p2);
 printf("%u\n\n",&a);
 printf("%u\n\n",&b);
 printf("%u\n\n",&p1);
 printf("%u\n\n",&p2);
 printf("%u\n\n",*&p1);
 printf("%u\n\n",*&p2);
 printf("%d\n\n",**&p1);
 printf("%d\n\n",**&p2);

 return 0;
}
