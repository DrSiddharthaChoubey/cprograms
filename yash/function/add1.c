#include<stdio.h>
int add(int,int);
int main()
{
 int a,b,c;
 printf("Enter the value of a=");
 scanf("%d",&a);
 printf("Enter the value of b=");
 scanf("%d",&b);

 c=add(a,b);
 printf("Sum=%d\n\n",c);

 return 0;
}

int add(int a,int b)
{
 int z;

 z=a+b;

 return (z);
}
