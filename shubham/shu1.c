#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the values");
scanf("%d%d%d",&a,&b,&c);
if(a*a*a+b*b*b+c*c*c==100*a+10*b+1*c)
printf("the no is armstrong no.");
else
printf("the no is not a armstrong number");
return 0;
}
