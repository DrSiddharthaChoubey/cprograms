/*write  a program to check wheather the no is prime or not*/
#include<stdio.h>
int main()
{
int n,i;
printf("enter the number");
scanf("%d",&n);
i=2;
while(i<n)
{
if(n%i==0)
  break;
else
i++;
}
if(i==n)
printf("%d is prime no",n);
else
printf("%d is not a prime number",n);
return 0;
}
