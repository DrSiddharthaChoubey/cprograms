#include<stdio.h>
int main()
{
 int a=10,b=20;
 int *p1,*p2;

 p1=&a;
 p2=&b;

 printf("a=%u\n\n",a);
 printf("b=%u\n\n",b);
 printf("p1=%u\n\n",p1);
 printf("p2=%u\n\n",p2);
 printf("(p2-p1)=%u\n\n",(p2-p1));
 printf("(p1+100)=%u\n\n",(p1+100));
 printf("(p2+250)=%u\n\n",(p2+250));
 printf("(p1-10)=%u\n\n",(p1-10));
 printf("(p2-35)=%u\n\n",(p2-35));
 printf("*p1=%d\n\n",*p1);
 printf("*p2=%d\n\n",*p2);
 printf("&a=%u\n\n",&a);
 printf("&b=%u\n\n",&b);
 printf("&p1=%u\n\n",&p1);
 printf("&p2=%u\n\n",&p2);
 printf("*&p1=%u\n\n",*&p1);
 printf("*&p2=%u\n\n",*&p2);
 printf("**&p1=%u\n\n",**&p1);
 printf("**&p2=%u\n\n",**&p2);

 return 0;
}
