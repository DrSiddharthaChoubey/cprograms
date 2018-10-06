/*write a c program to find the factorial value of any number entered through the keyboard*/

#include<stdio.h>
int main()
{
int i,n,fact=1;
printf("enter the value of n");
scanf("%d",&n);
for( i=1;i<=n;i++)
 fact= fact*i;
printf("factorial of %d=%d",n,fact);
return 0;
}
