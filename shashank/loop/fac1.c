#include<stdio.h>
  int main()
{
   float sum=0.0;
   int i,j,n,f,p,k;
   printf("Enter the term=");
   scanf("%d",&n);
    for(i=1;i<=n;i++)
    {  p=1;f=1;
      for(j=1;j<=i;j++)
        f=f*j;
      for(k=1;k<=2;k++)
         p=p*i;
      sum=sum+(p/(float)f);
    }
   printf("sum=%f",sum); 
  return 0;
}
