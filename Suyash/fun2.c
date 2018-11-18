#include<stdio.h>

void cal(int ,float *,float *);
int main()
{
int r;
float ar,pr;

printf("\nEnter radius : ");
	scanf("%d",&r);

	cal(r,&ar,&pr);
	
printf("\narea = %7.2f perimeter = %7.2f\n",ar,pr);

return 0;
}

void cal(int r,float *ar,float *pr)
{

	*ar=3.14*r*r;
	*pr=2*3.14*r;
}
