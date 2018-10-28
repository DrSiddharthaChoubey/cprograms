#include<stdio.h>
int power(int,int);
 int main()
{
 int a,b,p;
 printf("Enter the value of a=");
 scanf("%d",&a);
 printf("Enter the value of b=");
 scanf("%d",&b);

 p=power(a,b);
 printf("%d^%d=%d\n\n",a,b,p);

 return 0;
}

int power(int a,int b)
{
 int i=1,p=1;

 for(i=1;i<=b;i++)
 p=p*a;

 return (p);
}
