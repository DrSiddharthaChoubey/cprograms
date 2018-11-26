/* write a c prog to calculate the product of digits of a number*/



#include<stdio.h>
int main()
{
int n,a,n1,product=1;
printf("enter any number");
scanf("%d",&n);
n1=n;
while(n1>0)
  {
   a=n1%10;
   product=product*a;
   n1=n1/10;
  }
printf("product of digit %d=%d",n,product);
return 0;
}
