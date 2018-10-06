#include<stdio.h>
int main()
{
int c,d;
printf("write the value of c and d");
scanf("%f%f",&c,&d);
c=c^d;
d=c^d;
c=c^d:
printf("the value of c=%f\nthe value of d=%f",c,d);
return 0;
}
