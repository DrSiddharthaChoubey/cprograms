#include<stdio.h>
int isprime(int);
int main()
{
int a,b;
printf("enter a no.=");
scanf("%d",&a);
b=isprime(a);
if(b==1)
printf("its not prime");
else
printf("its prime");
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
return 0;
else
return 1;
}
