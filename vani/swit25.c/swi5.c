#include<stdio.h>
int main()
{
int n;
printf("enter the month from 1 to 12");
scanf("%d",&n);
switch(n)
{
case 1:
printf("\nits january no of day=31");
break;
case 2:
printf("\nits february no of day=28");
break;
case 3:
printf("\nits march no of day=31");
break;
case 4:
printf("\nits april no of day=30");
break;
case 5:
printf("\nits may no of day=31");
break;
case 6:
printf("\nits june no of day=30");
break;
case 7:
printf("\nits july no of day=31");
break;
case 8:
printf("\nits august no of day=31");
break;
case 9:
printf("\nits september no of day=30");
break;
case 10:
printf("\nits october no of day=31");
break;
case 11:
printf("\nits novmber no of day=30");
case 12:
printf("\nits decmeber no of day=31");
break;
}
return 0;
}


