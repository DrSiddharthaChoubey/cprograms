#include<stdio.h>
int main()
{
 int day;
 printf("Enter the day=");
 scanf("%d",&day);

 switch(day)
 {
  case 1:
  printf("\tSunday\n");
  break;

  case 2:
  printf("\tMonday\n");
  break;

  case 3:
  printf("\tTuesday\n");
  break;

  case 4:
  printf("\tWednesday\n");
  break;

  case 5:
  printf("\tThusday\n");
  break;

  case 6:
  printf("\tFriday\n");
  break;

  case 7:
  printf("\tSaturday\n");
  break;

  default:
  printf("Invaild day\n");
 }

 return 0;
}
