/*write a c program to print factorial of n*/
#include<stdio.h>
int main()
{
int i,n,fac=1;
printf("enter the no=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fac=fac*i;

}
printf("%d",fac);
return 0;
} 
