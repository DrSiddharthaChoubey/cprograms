#include<stdio.h>
int main()
{
int l,b,a,p;
printf("enter the value of length and breadth");
scanf("%d %d",&l,&b);
a=l*b;
p=2*(l+b);
printf("area of rectangle is:%d",a);
printf("\nperimeter of rectangle:%d",p);
if(a>p)
printf("\n area is greater then perimeter");
else
printf("\n not");
return 0;
}
