#include<stdio.h>
int main()
{
int cp,sp,p,l;
printf("enter the value of cp,sp");
scanf("%d %d",&cp,&sp);
p=sp-cp;
l=cp-sp;
if(sp>cp)
printf("profit incurred %d",p);
else if(sp<cp)
printf("loss incurred %d",l);
else
printf("no profit,no loss");
return 0;
}




