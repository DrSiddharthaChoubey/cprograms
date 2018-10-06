#include<stdio.h>
int main()
{
float l,b,r,ar,pr,area,c;
printf("enter the value of length,breadth,radius");
scanf("%f%f%f",&l,&b,&r);
ar=l*b;
pr=(l+b)*2;
area=3.14*r*r;
c=2*3.14*r;
printf("the area of rectangle=%f\nthe perimeter of rectangle=%f\nthe area of circle=%f\nthe circumference of circle=%f",ar,pr,area,c);

return 0;
}
