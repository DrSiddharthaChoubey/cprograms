#include<stdio.h>
int main()
{
int n,product=1,remainder;
printf("enter an intiger\n");
scanf("%d",&n);
while(n!=0)
{
 remainder=n%10;
 product = product*remainder;
 n=n/10;
}
printf("product of the digits of entered no. is =%d\n",product);
return 0;
}
