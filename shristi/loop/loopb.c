/*w a p to find the factorial value of any num through keyboard*/

#include<stdio.h>
int main()
{
int i,n,fact=1;
printf("enter the value of n");
scanf("%d",&n);
for(i=1;i<=n;i++)
fact=fact*i;
printf("factorial of %d=%d",n,fact);
return 0;
}

