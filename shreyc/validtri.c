#include<stdio.h>
int main()
{
int a1,a2,a3;
printf("enter the three angles");
scanf("%d%d%d",&a1,&a2,&a3);
if(a1+a2+a3==180)
printf("the triangle is valide");
else
printf("the triangle is not valid");
return 0;
}
