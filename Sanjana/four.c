#include<stdio.h>
int main()
{
int n,sum=0;
printf("enter the four digit no");
scanf("%d",&n);
sum=(n%10)+(n/1000);
printf("sum of four digit no=%d",sum);
return 0;
}
