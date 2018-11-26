#include<stdio.h>
int main()
{
float sum=0.0;
int i,j,terms,f,p,k,x;
printf("emter the term at x value");
scanf("%d%d",&terms,&x);
for(i=1;i<=terms;i++)
{
   f=1;p=1;
 for(j=1;j<=i;j++)
    f=f*j;
 for(k=1;k<=i;k++)
  p=p*x;
 sum=sum+p/(float)f;
}
printf("sum of series=%f",sum);
return 0;
}
