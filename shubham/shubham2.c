#include<stdio.h>
int main()
{
float l,b,r,ar,pr,ac,pc;
printf("enter the value of length,breadth and radius");
scanf("%f%f%f",&l,&b,&r);
ar=l*b;
pr=2*(l+b);
ac=3.14*r*r;
pc=2*3.14*r;
printf("area of rectangle=%f\nperimeter of rectangle=%f\narea of circle=%f\nperimeter of circle=%f",ar,pr,ac,pc);
return 0;
} 
