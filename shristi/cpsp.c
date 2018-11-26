#include<stdio.h>
int main()
{
int cp,sp,p,l;
printf("enter the cost price and selling price");
scanf("%d %d",&cp,&sp);
if(cp>sp)
{
printf("\n you are in loss");
l=cp-sp;
printf("\n loss of rs:%d",l);
}
else
{
printf("\n you are in profit");
p=sp-cp;
printf("\n profit of rs:%d",p);
}
return 0;
}
