#include<stdio.h>
int main()
{
 int a,b;
 printf("enter the value of a=");
 scanf("%d",&a);

 switch (a%2==0)
 {
  case 1:
  printf("a is a even number\n");
  break;
  case 0:
  printf("a is a odd number\n");
  break;
 
 } 
return 0;
}
