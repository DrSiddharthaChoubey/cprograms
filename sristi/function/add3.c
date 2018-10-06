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
 printf("Enter the value of a and b=\n");
 scanf("%d%d",&a,&b);
 c=a+b;
 return (c);
}
