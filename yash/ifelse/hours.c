#include<stdio.h>
int main()
{
 int hour;
 printf("Enter the efficiency of the worker=");
 scanf("%d",&hour);

 if(hour>=1 && hour<=3)
 printf("Worker is highly efficient\n");

 else if(hour>3 && hour<=4)
 printf("Worker is ordered to improve speed\n");

 else if(hour>4 && hour<=5)
 printf("Worker need training to improve the speed\n");

 else
 printf("Worker has to leave the company\n");

 return 0;
}
