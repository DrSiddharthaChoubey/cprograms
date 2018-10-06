#include<stdio.h>
int factorial(int n)
{
if(n==0)
return 1;
else
return(factorial(n-1)*n);
}
int main()
{ int num,f;
printf("enter the number");
scanf("%d",&num);
f=factorial(num);
printf("factorial of %d=%d",num,f);
return 0;
}
