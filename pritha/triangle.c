#include<stdio.h>
int main()
{
int a,b,c,sum;
printf("enter the first angle");
scanf("%d",&a);
printf("enter the second angle");
scanf("%d",&b);
printf("enter the third angle");
scanf("%d",&c);
sum=a+b+c;
if(sum==180)
printf("triangle is valid");
else 
printf("triangle is not valid");
return 0;
}

