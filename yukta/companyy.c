#include<stdio.h>
int main()
{
int hr;
printf("enter the hours");
scanf("%d",&hr);
if(hr>=2 && hr<=3)
{
printf("worker is highly efficient");
}
else if(hr>=3 && hr<=4)
{
printf("worker is ordered to improve speed");
}
else if(hr>=4 && hr<=5)
{
printf("worker needs training");
}
else if(hr>5)
{
printf("worker has to leave the company");
}
return 0;
}
