#include<stdio.h>
void area_peri(int,int *,int *);
int main()
{
float radius;
float area,peri;

printf("enter the radius:");
scanf("%f"&radius);

area_peri(radius,&area,&peri);

printf("area of circle=%f",area);
printf("perimeter of circle=%f",peri);

return 0;
}
void area_peri(int r,int *a,int *p)
{
*a=3.14*r*r;
*p=2*3.14*r;
}
























