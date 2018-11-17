#include<stdio.h>
int main()
{
 int a;
 printf("Enter the value of a=");
 scanf("%d",&a);

 switch(a==0)
 {
  case 1:
  printf("\n\n\t%d is equals to zero\n",a);
  break;

  case 0:
  {
   if(a>0)
   printf("\n\n\t%d is a positive number\n",a);

   else
   printf("\n\n\t%d is a negative number\n",a);
  }
  break;
 }

 return 0;
}
