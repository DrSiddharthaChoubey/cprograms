#include<stdio.h>
#include"add.h"
int main()
{
 int a,b,c;
 printf("Enter the value of a=");
 scanf("%d",&a);
 printf("Enter the value of b=");
 scanf("%d",&b);

 c=add(a,b);
 printf("sum=%d\n",c);

 return 0;
}
