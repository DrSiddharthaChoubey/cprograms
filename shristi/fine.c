#include<stdio.h>
int main()
{
int days;
printf("enetr the number of days ");
scanf("%d",&days);

if(days>=1&&days<=5)
printf("fine=%.2f",days*.5);

else if(days>=6&&days<=10)
printf("fine=%d",days*1);

else if(days>10&&days<=30)
printf("fine=%d",days*5);

else if(days>30)
printf("your membership will be cancelled");
return 0;
}
