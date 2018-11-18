#include<stdio.h>
void cir(float,float*,float*);
int main()
{
 float r,area,circ;
 printf("Enter the value of radius r=");
 scanf("%f",&r);

 cir(r,&area,&circ);
 printf("Area=%.3f\n",area);
 printf("Circumference=%.3f\n",circ);

 return 0;
}
void cir(float r,float *area,float *circ)
{
 *area=3.14*r*r;
 *circ=2*3.14*r;

}
