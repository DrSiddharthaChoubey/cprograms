#include<stdio.h>
int main()
{
int n,sum=0,remainder;
printf("enter an intiger\n");
scanf("%d",&n);
while(n!=0)
{
 remainder=n%10;
 sum = sum+remainder;
 n=n/10;
}
printf("sum of the digits of entered no. is =%d\n",sum);
return 0;
}
