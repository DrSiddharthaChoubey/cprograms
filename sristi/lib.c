#include<stdio.h>
int main()
{
float days;
printf("enter the no of days");
scanf("%f",&days);
if(days>=1&&days<=5)
   printf("fine=%f",days*.5);
else if(days>5&&days<=10)
   printf("fine=%f",days*1);
else if(days>10&&days<=30)
   printf("fine=%f",days*5);
else
   printf("membership will be cancelled");
return 0;
}



