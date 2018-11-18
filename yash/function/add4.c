#include<stdio.h>
void add();
int main()
{
 printf("Addition of two numbers\n\n");

 add();

 return 0;
}

void add()
{
 int a,b,c;
 printf("Enter the value of a=");
 scanf("%d",&a);
 printf("Enter the value of b=");
 scanf("%d",&b);

 c=a+b;
 printf("sum=%d\n",c);
}
