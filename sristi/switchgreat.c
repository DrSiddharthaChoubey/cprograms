#include<stdio.h>
int main()
{
 int a,b;
 printf("enter the value of a=");
 scanf("%d",&a);
 printf("enter the value of b=");
 scanf("%d",&b);

 switch (a>b)
 {
  case 1:
  printf("a is greater than b\n");
  break;
  case 0:
  printf("b is greater than a\n");
  break;
 
 } 
return 0;
}
