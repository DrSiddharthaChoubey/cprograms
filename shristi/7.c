#include<stdio.h>
int main()
{
int a,b,c,sum;
printf("enter the value of three angle:");
scanf("%d %d %d",&a,&b,&c);
sum=a+b+c;
printf("sum=%d",sum);
if(sum==180)
{
printf("given angles form a triangle");
}
else
{
printf("given angle doesnt form a triangle");
}
return 0;
}
