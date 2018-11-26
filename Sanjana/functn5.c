#include<stdio.h>
int power(int ,int);
int main()
{
int a,b,p;
printf("enter the no .");
scanf("%d%d",&a,&b);
p=power(a,b);
printf("power is %d",p);
return 0;
}

int power(int a,int b)
{
int i,p=1;
for(i=1;i<=b;i++)
p=p*a;
return (p);
}

