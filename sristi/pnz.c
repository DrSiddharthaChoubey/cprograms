#include<stdio.h>
int main()
{
 int a,b;
 printf("enter the value of a=");
 scanf("%d",&a);

 switch (a>0 || a<0 || a==0)
 {
  case 1:
  printf("a is a positive no. \n");
  break;
  case 2:
  printf("a is a negative number\n");
  break;
  case 3:
  printf("a is zero");
 break;
 } 
return 0;
}
