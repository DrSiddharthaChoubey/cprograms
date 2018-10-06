#include<stdio.h>
int main()
{
int n,i;
printf("enter the no. of month");
scanf("%d",&n);
switch(n)
{
case 1:
printf("january=31 days");
case 2:
printf("february=28 days");
case 3:
printf("march=31 days");
case 4:
printf("april=30 days");
case 5:
printf("may=31 days");
case 6:
printf("june=30 days");
case 7:
printf("july=31 days");
case 8:
printf("august=31 days");
case 9:
printf("september=30 days");
case 10:
printf("october=31 days");
case 11:
printf("november=30 days");
case 12:
printf("december=31 days");
}
return 0;
}
