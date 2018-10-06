#include<stdio.h>
int main()
{
int l,b,area,per;
printf("enter the value of length and breadth=");
scanf("%d%d",&l,&b);
area=l*b;
per=2*(l+b);
if(area>per)
printf("area is greater than per");
else
printf("area is not greater than per");
return 0;
}
