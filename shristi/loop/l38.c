/*WAP to print 9th series series*/


#include<stdio.h>
int main()
{
int i,j,k,f,p,terms,x;
float sum=0.0;
printf("enter the value of x:");
scanf("%d%d",&terms,&x);
for(i=1;i<=terms;i++)
{
  f=1,p=1;
   for(j=1;j<=i;j++)
    f=f*j;
  if(i%2!=0)
  sum=sum+i/(float)f;
  else
  sum=sum-i/(float)f;

   for(k=1;k<=i;k++)
    p=p*x;
sum=sum+p/(float)f;
}
printf("sum of series %f",sum);
return 0;
}


