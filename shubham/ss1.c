#include<stdio.h>
int main()
{
int day;
float fine;
printf("enter the no of day");
scanf("%d",&day);
if(day>=1&&day<=5)
{
  fine=day*0.5;
  printf("your fine is=%f",fine);
}
else if (day>=6&&day<=10)
{
  fine=day*1;
  printf("your fine is=%f",fine);
}
else if (day>10&&day<=30)
{
  fine=day*5;
  printf("your fine is=%f",fine);
}
else
  printf("your membership is cancelled");
return 0;
}
