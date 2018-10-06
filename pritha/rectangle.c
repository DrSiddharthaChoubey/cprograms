#include<stdio.h>
int main()
{
int l,b,area,peri;
printf("enter the length and breadth of rectangle");
scanf("%d%d",&l,&b);
area=l*b;
peri=2*(l+b);
printf("\narea of rectangle:%d",area);
printf("\nperimeter of rectangle:%d",peri);
if(area>peri)
printf("\narea is greater than perimeter");
else
printf("\narea is not greater than perimeter");
return 0;
}
