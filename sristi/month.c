#include<stdio.h>
int main()
{
 int month;
 printf("Enter the month number=");
 scanf("%d",&month);

 switch(month)
 {
  case 1:
  printf("31 days in january \n");
  break;
  
  case 2:
  printf("28 days in february \n");
  break;
  
  case 3:
  printf("31 days in march \n");
  break;
  
  case 4:
  printf("30 days in april \n");
  break;
  
  case 5:
  printf("31 days in may \n");
  break;
  
  case 6:
  printf("30 days in june \n");
  break;
  
  case 7:
  printf("31 days in july \n");
  break;
  
  case 8:
  printf("31 days in august \n");
  break;
  
  case 9:
  printf("30 days in september \n");
  break;
  
  case 10:
  printf("31 days in october \n");
  break;
  
  case 11:
  printf("30 days in november \n");
  break;
  
  case 12:
  printf("31 days in december \n");
  break;
  
  default:
  printf("invalid month");
}
 return 0;
}
