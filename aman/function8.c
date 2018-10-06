#include<stdio.h>
int power(int,int);
float factorial(int);
int main()
{
int i,terms;
float sum=0.0;
printf("terms=");
scanf("%d",&terms);
i=1;
while(i<=terms)
{
sum=sum+power(i,2)/factorial(i);
i++;
}
printf("%f",sum);

return 0;
}
int power(int a,int b)
{
int i,p=1;
for(i=1;i<=b;i++)
p=p*a;
return(p);
}
float factorial(int a)
{
int i;
float f=1.0;
for(i=1;i<=a;i++)
f=f*i;
return(f);
}




