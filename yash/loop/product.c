#include<stdio.h>
int main()
{
 int n,i,a,n1,product=1;
 printf("Enter the number=");
 scanf("%d",&n);

 n1=n;

 while(n1>0)
 {
  a=n1%10;
  product=product*a;
  n1=n1/10;
 }

 printf("Product of digits of %d=%d\n",n,product);

 return 0;
}
