#include<stdio.h>
int main()
{
int l,b,a,p;
printf("enter the length and breadth");
scanf("%d%d",&l,&b);
a=l*b;
p=2*(l+b);
printf("\narea of rectangle:%d",a);
printf("\nperimeter of rectangle:%d",p);
if(a>p)
printf("\narea is greater than perimeter");
else
printf("\narea is not greater than perimeter");
return 0;
}
