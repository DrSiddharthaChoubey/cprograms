#include<stdio.h>
int main()
{
 float day;
 printf("Enter the number of days=");
 scanf("%f",&day);

 if(day>=1 && day<=5)
 printf("Fine=Rs.%f\n",day*.5);

 else if(day>5 && day<=10)
 printf("Fine=Rs.%f\n",day*1);

 else if(day>10 && day<=30)
 printf("Fine=Rs.%f\n",day*5);

 else
 printf("Membership will be cancelled\n");

 return 0;
}
