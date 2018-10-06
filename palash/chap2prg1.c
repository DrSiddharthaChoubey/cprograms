#include<stdio.h>
int main()
{int cp,sp,loss,profit;
printf("enter the cost price and selling price of the item:");
scanf("%d%d",&cp,&sp);
if(sp>cp)
{printf("it is a profit:");
}
else
{printf("it is a loss:");
}
return 0;
}
