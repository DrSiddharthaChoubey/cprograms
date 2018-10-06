#include<stdio.h>
int main()
{
int cp,sp;
printf("enter the cost price and selling price ");
scanf("%d %d",&cp,&sp);
if(sp>cp)
{
printf("\nprofit  of rs:%d",sp-cp);
}
else
{
printf("\nloss of rs:%d",cp-sp);
}
return 0;
}






