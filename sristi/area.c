#include<stdio.h>
int main()
{
int l,b,area,perimeter;
printf("enter the length and breadth of rectangle");
scanf("%d%d",&l,&b);
area =l*b;
perimeter=2*(l+b);
if(area>perimeter)
printf("area is greater than perimeter");
else
printf("area is less than perimeter");
return 0;
}


