#include<stdio.h>
#include<stdlib.h>
int main()
{
int n;
printf("enter the no.");
scanf("%d",&n);
switch(n%7)
{
case 0:
printf("sunday");
break;
case 1:
printf("monday");
break;
case 2:
printf("thusday");
break;
case 3:
printf("wednesday");
case 4:
printf("thusday");
case 5:
printf("friday");
break;
default:
printf("satday");
break;
//case 7:printf("sunday");
}
return 0;
}
