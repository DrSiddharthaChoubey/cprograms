#include<stdio.h>
int fac(int);
int main()
{
int n,f;
printf("enter the value of n");
scanf("%d",&n);
f=fac(n);
printf("power=%d",f);
return 0;
}
int fac(int n)
{
int i,fac=1;
for(i=1;i<=n;i++)
fac=fac*i;
return (fac);
}
