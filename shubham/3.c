#include<stdio.h>
int add();
int main()
{ 
int s;
printf("addition of two numbers\n\t");
s=add();
printf("sum=%d",s);
return 0;
}
int add()
{
int a,b,c;
printf("enter a and b");
scanf("%d%d",&a,&b);
c=a+b;
return(c);
}
