#include<stdio.h>
int main()
{int hours;
printf("enter the hours taken by the worker to complete the work:");
scanf("%d",&hours);
if(hours>=2&&hours<=3)
{printf("highly efficient");
}
if(hours>3&&hours<=4)
{printf("improve speed");
}
if(hours>4&&hours<=5)
{printf("training to improve speed");
}
if(hours>5)
{printf("has to leave the company");
}
return 0;
}

