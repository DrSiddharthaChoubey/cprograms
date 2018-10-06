#include<stdio.h>
int isprime(int);
int main()
{
int n,p;
printf("enter the number");
scanf("%d",&n);
p= isprime(n);
if(p==1)
   printf("%d is prime no",n);
else
   printf("%d is not prime no",n);
return 0;
}
int isprime(int x)
{
int i=2;
while(i<x)
{
if
  (x%i==0)
break;
else
      i++;
}
   if(i==x)
     return 1;
 else
     return 0;
}

