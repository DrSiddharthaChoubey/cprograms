#include<stdio.h>
int add(int,int);
int main()
{
int a,b,c;
 printf("enter the value of a and b=\n");
 scanf("%d%d",&a,&b);
 c=add(a,b);
 printf("Sum=%d\n",c);
 return 0;
}
 int add(int a,int b)
{
 int z;

 z=a+b;
 return (z);
}
