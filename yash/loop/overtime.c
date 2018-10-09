#include<stdio.h>
int main()
{
 int i,time_worked,over_time,overtime_pay=0;

 for(i=1;i<=10;i++)
 {
  printf("Enter the time employee worked in hours:");
  scanf("%d",&time_worked);

  if(time_worked>40)
  {
   over_time=time_worked-40;
   overtime_pay=overtime_pay+(12*over_time);
  }
 }
 printf("\nTotal overtime pay of 10 employees is Rs.%d\n",overtime_pay);

 return 0;
}
