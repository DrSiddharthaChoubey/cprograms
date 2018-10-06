#include<stdio.h>

int main()
{
float l,b,r,ar,pr,ac,cc;
printf("\nEnter Length of Rectangle : ");
	scanf("%f",&l);
printf("\nEnter Breadth of Rectangle : ");
	scanf("%f",&b);
printf("\nEnter Radius of Circle : ");
	scanf("%f",&r);

	ar=l*b;
	pr=2*(l+b);
	ac=3.14*r*r;
	cc=2*3.14*r;

printf("\nArea of Rectangle : %4.2f",ar);
printf("\nPerimeter of Rectangle : %4.2f",pr);

printf("\nArea of Circle : %4.2f",ac);
printf("\nCircumference of Circle : %4.2f\n",cc);

return 0;
}
