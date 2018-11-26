#include<stdio.h>
int main()
{
float l,b,r,area_r,peri_r,cir_c,area_c;
printf("enter the length,breadth,radius");
scanf("%f%f%f",&l,&b,&r);
area_r=l*b;
peri_r=2*(l+b);
cir_c=2*3.14*r;
area_c=3.14*r*r;
printf("\nin area_rof rectangle=%f",area_r);
printf("\nin peri_r of rectangle=%f",peri_r);
printf("\nin cir_c of rectangle=%f",cir_c);
printf("\nin area_c of rectangle=%f\n",area_c);
return 0;
}

