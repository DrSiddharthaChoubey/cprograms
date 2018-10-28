#include<stdio.h>
int main()
{
 int a,b,c,big;
 printf("Enter the value of a=");
 scanf("%d",&a);
 printf("Enter the value of b=");
 scanf("%d",&b);
 printf("Enter the value of c=");
 scanf("%d",&c);

 if(a>b && a>c)
 big=a;

 if(b>a && b>c)
 big=b;

 if(c>a && c>b)
 big=c;

 printf("Largest=%d\n",big);

 return 0;
}
