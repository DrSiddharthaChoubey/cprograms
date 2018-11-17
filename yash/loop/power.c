#include<stdio.h>
int main()
{
 int i,a,b,p=1;
 printf("Enter the value of a=");
 scanf("%d",&a);
 printf("Enter the value of b=");
 scanf("%d",&b);

 for(i=1;i<=b;i++)
 p=p*a;
 printf("%d^%d=%d",a,b,p);

 return 0;
}
