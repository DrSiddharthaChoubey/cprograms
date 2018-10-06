#include<stdio.h>
void add();
int main()
{
printf("addition of two nos\n\n");
add();
return 0;
}
void add()
{
int a,b,c;
printf("enter the value of a and b\n\t");
scanf("%d%d",&a,&b);
c=a+b;
printf("%d",c);
}
