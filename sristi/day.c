#include<stdio.h>
#include<stdlib.h>
int main()
{
int day;
printf("enter the day");
scanf("%d",&day);
switch(day)
{
  case 1:
  printf("\t sunday \n");
  break;
  case 2:
  printf("\t monday \n");
  break;
  case 3:
  printf("\t tuesday \n");
  break;
  case 4:
  printf("\t wednesday \n");
  break;
  case 5:
  printf("\t thursday \n");
  break;
  case 6:
  printf("\t friday \n");
  break;
  case 7: 
  printf("\t saturday \n");
  break;
  default:
  printf("\t invalid day \n");
}
return 0;
}
