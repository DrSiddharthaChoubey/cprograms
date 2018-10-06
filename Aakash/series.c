
#include<stdio.h>
int main()
{
int i,j,f,p,n,k;
float sum=0.0f;

printf("enter the no. of terms");
scanf("%d",&n);

for(i=1;i<=n;i++)
{

f=1;
p=1;
for(j=1;j<=i;j++)
f=f*j;

for(k=1;k<=i;k++)
p=p*i;

sum=sum+(float)f/p;
}
printf("%f",sum);
return 0;
}
