#include<stdio.h>
int main()
{
 int cp,sp,p;
 printf("Enter the value of cost price=Rs.");
 scanf("%d",&cp);
 printf("Enter the value of selling price=Rs.");
 scanf("%d",&sp);

 p=cp-sp;
 printf("cost price=%d\n",cp);
 printf("selling price=Rs.%d\n",sp);
 printf("Profit=Rs.%d\n",p);
 
 return 0;
}
