#include<stdio.h>
int main()
{
int a1,a2,a3;
printf("enter the all three angles");
scanf("%d%d%d",&a1,&a2,&a3);
if(a1+a2+a3==180)
printf("triangle is valid");
else
printf("triangle is invalid");
return 0;
}


