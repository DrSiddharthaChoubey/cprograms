#include<stdio.h>
int main()
{
 int month;
 printf("Enter the month number=");
 scanf("%d",&month);

 switch(month)
 {
  case 1:
  printf("\tJanuary\n");
  printf("\t31 days\n");
  break;

  case 2:
  printf("\tFebruary\n");
  printf("\t28 days\n");
  break;

  case 3:
  printf("\tMarch\n");
  printf("\t31 days\n");
  break;

  case 4:
  printf("\tApril\n");
  printf("\t30 days\n");
  break;

  case 5:
  printf("\tMay\n");
  printf("\t31 days\n");
  break;

  case 6:
  printf("\tJune\n");
  printf("\t30 days\n");
  break;

  case 7:
  printf("\tJuly\n");
  printf("\t31 days\n");
  break;

  case 8:
  printf("\tAugust\n");
  printf("\t31 days\n");
  break;

  case 9:
  printf("\tSeptember\n");
  printf("\t30 days\n");
  break;

  case 10:
  printf("\tOctober\n");
  printf("\t31 days\n");
  break;

  case 11:
  printf("\tNovember\n");
  printf("\t30 days\n");
  break;

  case 12:
  printf("\tDecember\n");
  printf("\t31 days\n");
  break;

  default:
  printf("Invaild month number\n");
 }

 return 0;
}
