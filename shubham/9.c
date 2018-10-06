#include<stdio.h>
int isprime(int);
int main()
{
int n,s;
printf("enter the no.\n");
scanf("%d",&n);
s=isprime(n);
if(s==1)
printf("%d is a prime no",n);
else
printf("%d is nt a prime no",n);
return 0;
}
int isprime(int x)
{
int i=2;
while(i<x)
{
if(x%i==0)
break;
else
i++;
}
if(i==x)
return 1;
else
return 0;
}
