#include<stdio.h>
#include"sub.h"
int main()
{
 int a,b,c;
 printf("Enter the value of a=");
 scanf("%d",&a);
 printf("Enter the value of b=");
 scanf("%d",&b);

 c=sub(a,b);
 printf("subtraction=%d\n",c);

 return 0;
}