/*WAP to print 6th series series.............sum for 4=5.166667*/


#include<stdio.h>
int main()
{
int i,j,k,f,p,terms;
float sum=0.0;
printf("enter the terms:");
scanf("%d",&terms);
for(i=1;i<=terms;i++)
{
f=1,p=1;
for(j=1;j<=i;j++)
f=f*j;
for(k=1;k<=2;k++)
p=p*i;
sum=sum+p/(float)f;
}
printf("sum of series %f",sum);
return 0;
}









