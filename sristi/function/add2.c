#include<stdio.h>
void add(int,int);
int main()
{
int a,b;
 printf("enter the value of a and b\n\n");
 scanf("%d%d",&a,&b);
 add(a,b);
 return 0;
}
 void add(int a,int b)
{
 int c;

 c=a+b;
 printf("Sum=%d\n",c);
}
