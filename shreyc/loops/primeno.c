#include<stdio.h>
int main()
{
int n,i;
printf("enter the no.");
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
printf("%d is prime no.",n);
else
printf("%d is not prime no.",n);
return 0;
}
