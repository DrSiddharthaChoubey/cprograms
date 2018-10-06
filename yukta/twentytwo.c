#include<stdio.h>
int main()
{
int fa,sa,ta,sum;
printf("enter the first angle");
scanf("%d",&fa);
printf("enter the second angle");
scanf("%d",&sa);
printf("enter the third angle");
scanf("%d",&ta);
sum=fa+sa+ta;
if(sum==180)
printf("traingle is valid");
else
printf("triangle is not valid");
return 0;
}


