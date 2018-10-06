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
 printf("Enter the value of a and b=\n");
 scanf("%d%d",&a,&b);
 c=a+b;
 printf("Sum=%d\n",c);
}
