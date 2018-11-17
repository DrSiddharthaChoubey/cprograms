#include<stdio.h>
int main()
{
 float da,bs,hra,gs;
 printf("Enter the Ramesh's basic salary=Rs.");
 scanf("%f",&bs);

 if(bs<1500)
 {
  da=bs*20/100;
  hra=bs*10/100;
 }

 else
 {
  da=bs*40/100;
  hra=bs*20/100;
 }

 gs=hra+da+bs;
 printf("Gross salary of Ramesh=Rs.%.3f\n",gs);

 return 0;
}
