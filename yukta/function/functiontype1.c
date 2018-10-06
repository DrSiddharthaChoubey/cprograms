#include<stdio.h>
void add();
int main()
{ 
printf("addition of two number");
add();
return 0;
}
void add()
{
int a,b,c;
printf("enter the value of a and b");
scanf("%d%d",&a,&b);
c=a+b;
printf("sum=%d",c);
}

