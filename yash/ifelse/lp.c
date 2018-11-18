#include<stdio.h>
int main()
{
 int cp,sp,p,l;
 printf("Enter the cost price=");
 scanf("%d",&cp);
 printf("Enter the selling price=");
 scanf("%d",&sp);

 p=sp-cp;
 l=cp-sp;

 if(sp>cp)
 printf("Profit incurred %d\n",p);

 else if(sp<cp)
 printf("loss incurred %d\n",l);

 else
 printf("No loss no profit\n");

 return 0;
}
