#include<stdio.h>
int power(int,int);
float fac(int);
int main()
{
int terms,i;
float sum=0.0;
printf("enter the terms");
scanf("%d",&terms);
i=1;
while(i<=terms)
{
sum=sum+power(i,2)/(fac(i));
i++;
}
printf("sum of series=%f",sum);
return 0;
}
int power(int a,int b)
{
int i,p=1;
for(i=1;i<=b;i++)
p=p*a;
return(p);
}
float fac(int n)
{
int i,fac=1;
for(i=1;i<=n;i++)
fac=fac*i;
return (fac);
}
