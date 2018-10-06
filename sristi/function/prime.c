#include<stdio.h>
int isprime(int);
int main()
{
 int num,p;
 printf("Enter the number=");
 scanf("%d",&num);

 p=isprime(num);
 if(p==1)
 printf("%d is a prime number\n",num);
 else
 printf("%d is not a prime number\n",num);

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
