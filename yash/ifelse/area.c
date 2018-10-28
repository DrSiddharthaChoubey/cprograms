#include<stdio.h>
int main()
{
 int l,b,area,perimeter;
 printf("Enter the length of rectangle=");
 scanf("%d",&l);
 printf("Enter the breadth of rectangle=");
 scanf("%d",&b);

 area=l*b;
 perimeter=2*(l+b);

 if(area>perimeter)
 printf("Area is greater than perimeter\n");

 else
 printf("Area is less than perimeter\n");

 return 0;
}
