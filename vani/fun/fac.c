#include<stdio.h>
int fac(int);
int main()
{
int n,fact;
printf("nter the value n");
scanf("%d",&n);
fact=fac(n);
printf("%d",fact);
return 0;
}
int fac(int n)
{int i,f=1;
for(i=1;i<=n;i++)
f=f*i;
return(f);
}
