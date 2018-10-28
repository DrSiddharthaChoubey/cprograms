#include<stdio.h>
void add(int,int);
int main()
{
 int a,b;
 printf("Enter the value of a=");
 scanf("%d",&a);
 printf("Enter the value of b=");
 scanf("%d",&b);

 add(a,b);

 return 0;
}

void add(int a,int b)
{
 int c;

 c=a+b;
 printf("sum=%d\n",c);
}
