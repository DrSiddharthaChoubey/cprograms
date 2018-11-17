#include<stdio.h>
int add();
int main()
{
 int s;
 printf("Addition of two numbers\n\n");

 s=add();
 printf("Sum=%d\n",s);

 return 0;
}

int add()
{
 int a,b,c;
 printf("Enter the value of a=");
 scanf("%d",&a);
 printf("Enter the value of b=");
 scanf("%d",&b);

 c=a+b;

 return (c);
}
