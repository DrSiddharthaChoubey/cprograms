#include<stdio.h>
int main()
{int a,b;
float c,d;
scanf("%d %d",&a,&b);
scanf("%f %f",&c,&d);
printf("%d %d\n",a+b,a-b);
printf("%-5.1f %-5.1f",c+d,c-d);
return 0;
}