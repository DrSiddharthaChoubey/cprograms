#include<stdio.h>
#include"calculator.h"
int main()
{
 int a,b,s,m,d,q;
 printf("Enter the value of a=");
 scanf("%d",&a);
 printf("Enter the value of b=");
 scanf("%d",&b);

 s=add(a,b);
 printf("\tAddition=%d\n\n",s);

 q=sub(a,b);
 printf("\tSubtraction=%d\n\n",q);

 m=multi(a,b);
 printf("\tMultiplication=%d\n\n",m);

 d=div(a,b);
 printf("\tDivision=%d\n\n",d);

 return 0;
}
