#include<stdio.h>
int factorial(int);
int main()
{
 int n,fact;
 printf("Enter the value of n=");
 scanf("%d",&n);

 fact=factorial(n);
 printf("Factorial of number %d=%d\n\n",n,fact);

 return 0;
}

int factorial(int n)
{
 int i=1,f=1;

 for(i=1;i<=n;i++)
 f=f*i;

 return (f);
} 
