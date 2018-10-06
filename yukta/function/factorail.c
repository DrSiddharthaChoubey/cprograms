#include<stdio.h>
int factorial(int);
int main()
{
int n,fact;
printf("enter the value of n");
scanf("%d",&n);
fact=factorial(n);
printf("factorial of %d=%d",n,fact);
return 0;
}
 int factorial(int n)
{
  int i,f=1;
  for(i=1;i<=n;i++)
  f=f*i;
  return (f);
}

