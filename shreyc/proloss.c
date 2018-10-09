#include<stdio.h>
int main()
{
int cp,sp,p,l;
printf("enter the  cost price and selling price");
scanf("%d%d",&cp,&sp);
if (cp>sp)
{l=cp-sp;
printf("loss incurred %d",l);
}
else if (sp>cp)
{p=sp-cp;
printf("profit incurred %d",p);
}
else
printf("no profit no loss");
return 0;
}





