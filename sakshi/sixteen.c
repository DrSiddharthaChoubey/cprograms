#include<stdio.h>
int main()
{
int cp,sp,p,l;
printf("enter the cost price\n");
scanf("%d",&cp);
printf("enter the selling price\n");
scanf("%d",&sp);
p=sp-cp;
l=cp-sp;
if(p>0)
{
printf("profit\n");
}
else
{
printf("loss\n");
}
return 0;
}
