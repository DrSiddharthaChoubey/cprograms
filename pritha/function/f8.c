#include<stdio.h>
int power(int,int);
float factorial(int);
int main()
{
int term,i;
float sum=0.0;
printf("enter the term value");
scanf("%d",&term);
 i=1;
while(i<=term)
{
sum=sum+power(i,2)/factorial(i);
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
float factorial(int n)
{
int i;
float f=1.0;
for(i=1;i<=n;i++)
  f=f*i;
return(f);
}
