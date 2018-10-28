#include<stdio.h>
int main()
{
 int q,d=0;
 float rate,tot;
 printf("Enter the quantity=");
 scanf("%d",&q);
 printf("Enter the rate=Rs.");
 scanf("%f",&rate);

 if(q>1000)
 d=10;

 tot=(q*rate)-(q*rate*d/100);

 printf("Total expenses=Rs.%.3f\n",tot); 

 return 0;
}
