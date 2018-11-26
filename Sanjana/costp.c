#include<stdio.h>
int main()
{
float sp,pro,cp;
printf("enter the selling price and profit");
scanf("%f%f",&sp,&pro);
cp=(sp-pro)/15;
printf("\n cp of single item=%f",cp);
return 0;
}
