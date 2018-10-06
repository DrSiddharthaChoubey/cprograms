#include<stdio.h>
int main()
{int month,days;
  scanf("%d",&month);
  switch(month)
{ case 4:
  case 6:
  case 9:
  case 11:
          days=30;
          printf("%d",days);
          break;
  case 1:
  case 3:
   case 5:
   case 7:
  case 10:
  case 12:
          days=31;
          printf("%d",days);
           break;
    case 2:
         days=28;
         printf("%d",days);
            break;
     default:
         printf("invalid month");
}
return 0;
}

