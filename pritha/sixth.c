#include<stdio.h>
int main()
{
float l,b,r,area_r,peri_r,cir_c,area_c;
printf("enter the lengthy, breadth,radius");
scanf("%f%f%f",&l,&b,&r);
area_r=l*b;
peri_r=2*(l+b);
cir_c=2*3.14*r;
area_c=3.14*r*r;
printf("\n area of rectangle =%f",area_r);
printf("\n perimeter of rectangle=%f",peri_r);
printf("\n area of circle =%f",area_r);
printf("\n circumference if circle=%f",cir_c);
return 0;
}
