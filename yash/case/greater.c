#include<stdio.h>
int main()
{
 int a,b;
 printf("Enter the value of a=");
 scanf("%d",&a);
 printf("Enter the value of b=");
 scanf("%d",&b);

 switch(a>b)
 {
  case 1:
  printf("\n\t%d(a) is greater than %d(b)\n",a,b);
  break;

  case 0:
  printf("\n\t%d(b) is greater than %d(a)\n",b,a);
  break;
 }

 return 0;
}
