#include<stdio.h>
int main()
{
 int c,d,e;
 printf("Enter the value of c=");
 scanf("%d",&c);
 printf("Enter the value of d=");
 scanf("%d",&d);

 e=c;
 c=d;
 d=e;

 printf("New the value of c=%d\n",c);
 printf("New the value of d=%d\n",d);

 return 0;
}
