#include<stdio.h>
int main()
{
int cp,sp,l,p;
printf("enter the costprice\n");
scanf("%d",&cp);
printf("enter the selling price\n");
scanf("%d",&sp);
p=sp-cp;
l=cp-sp;
if(p>0)
{
printf("profit\n");
}
if(sp<cp)
{
printf("loss\n");
}
if(p==0)
{
printf("no profit no loss");
}
return 0;
}



