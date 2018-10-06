#include<stdio.h>
int add();
int main()
{ 
int s;
printf("addition of two number");
s=add();
printf("sum=%d",s);
return 0;
}
int add()
{
int a,b,c;
printf("enter the value of a and b");
scanf("%d%d",&a,&b);
c=a+b;
return (c);
}

