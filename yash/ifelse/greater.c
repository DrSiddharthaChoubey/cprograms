#include<stdio.h>
int main()
{
 int a,b,c;
 printf("Enter of value of a=");
 scanf("%d",&a);
 printf("Enter of value of b=");
 scanf("%d",&b);
 printf("Enter of value of c=");
 scanf("%d",&c);

 if(a>b && a>c)
 printf("a is greater than b and c\n");

 else if(b>c)
 printf("b is greater than a and b\n");

 else
 printf("c is greater than a and b\n");

 return 0;
}
