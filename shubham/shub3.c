#include<stdio.h>
int main()
{
int year;
printf("enter the year=");
scanf("%d",&year);
if(year%4==0)
printf("year is leap");
else
printf("year is non leap");
return 0;
}
