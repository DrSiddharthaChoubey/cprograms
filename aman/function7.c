#include<stdio.h>
int factorial(int);
int main()
{
int a,f=1;
printf("enter the value of a=");
scanf("%d",&a);
f=factorial(a);
printf("factorial of %d=%d",a,f);
return 0;
}
int factorial(int a)
{
int i,f=1;
for(i=1;i<=a;i++)
f=f*i;
return(f);
}

