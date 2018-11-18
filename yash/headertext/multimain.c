#include<stdio.h>
#include"multi.h"
int main()
{
 int a,b,c;
 printf("Enter the value of a=");
 scanf("%d",&a);
 printf("Enter the value of b=");
 scanf("%d",&b);

 c=multi(a,b);
 printf("multiplication=%d\n",c);

 return 0;
}
