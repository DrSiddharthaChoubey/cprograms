/* w a p to find the sum of the number of digits in a number*/



#include<stdio.h>
int main()
{
int n,a,n1,sum=0;
printf("enter any number");
scanf("%d",&n);
n1=n;
while(n1>0)
  {
   a=n1%10;
   sum=sum+a;
   n1=n1/10;
  }
printf("sum of digit %d=%d",n,sum);
return 0;
}
