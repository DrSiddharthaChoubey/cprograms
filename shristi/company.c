#include<stdio.h>
int main()
{
int hours;
printf("enter the hours he worked");
scanf("%d",&hours);

if(hours>=2&&hours<=3)
printf("worker is highly efficient");

else if(hours>3&&hours<=4)
printf("worker is ordered to improve speed");
 
else if(hours>4&&hours<=5)
printf("worker is given training to improve speed");

else if(hours>5)
printf("worker is said to leave the company");

return 0;
}
