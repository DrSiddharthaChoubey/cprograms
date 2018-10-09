#include<stdio.h>
#include<stdlib.h>
int main()
{
int month;
printf("enter the no. of month to find no. of days in that month");
scanf("%d",&month);
switch(month)
{
case 1:
printf("its 31 days in january");
break;
case 2:
printf("its 28 days in february");
break;

case 3:
printf("its 31 days in march");
break;
case 4:
printf("its 30 days in april");
break;
case 5:
printf("its 31 days in may");
break;
case 6:
printf("its 30 days in june");
break;
case 7:
printf("its 31 days in july");
break;
case 8:
printf("its 31 days in august");
break;
case 9:
printf("its 30 days in september");
break;
case 10:
printf("its 31 days in october");
break;
case 11:

printf("its 30 days in november");
break;
case 12:
printf("its 31 days in december");
break;
default:
printf("no such month");
}
return 0;
}
