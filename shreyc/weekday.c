#include<stdio.h>
#include<stdlib.h>
int main()
{
int day;
printf("enter the no. of day");
scanf("%d",&day);

switch(day)

{
  case 0:
    printf("its sunday");
    break;
  case 1:
    printf("its monday");
    break;
  case 2:
    printf("its tuesday");
    break;
  case 3:
    printf("its wenesday");
    break;
  case 4:
    printf("its thursday");
    break;
  case 5:
    printf("its friday");
    break;
  case 6:
    printf("its saturday");
    break; 
 default:
  printf("invalid day");
}
return 0;
}

