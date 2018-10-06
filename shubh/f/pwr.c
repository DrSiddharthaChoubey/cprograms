#include<stdio.h>
int fact(int);
int main()
{
int a,x,f=1;
printf("enter no.- ");
scanf("&d",&a);
f=fact(int a);
printf("%d",f);
}
int fact(int a)
{
int f=1,x;
for(x=1;x<=a;x++)
f=f*x;
return f;
}
