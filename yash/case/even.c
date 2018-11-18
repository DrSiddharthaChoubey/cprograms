#include<stdio.h>
int main()
{
 int a;
 printf("Enter the value of a=");
 scanf("%d",&a);

 switch(a%2==0)
 {
  case 1:
  printf("\n\t%d(a) is a even number\n",a);
  break;

  case 0:
  printf("\n\t%d(a) is a odd number\n",a);
  break;
 }

 return 0;
}
