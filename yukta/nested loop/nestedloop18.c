#include<stdio.h>
int main()
{
float sum=0.0;
int i,j,terms,f,p,k;
printf("enter the term value");
scanf("%d",&terms);
for(i=1;i<=terms;i++)
{
    f=1;p=1;
  for(j=1;j<=i;j++)
    f=f*j;
  if(i%2!=0)
   sum=sum+i/(float)f;
  else
   sum=sum-i/(float)f;
  for(k=1;k<=i;k++)
    p=p*i;
sum=sum+p/(float)f;
}
printf("sum of series=%f",sum);
return 0;
}
