#include<stdio.h>
int main()
{
 int i,n,sum=0;
 printf("Enter the end point for sum of natural numbers=");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
 {
  if(i%2!=0)
  sum=sum+i;
 }

 printf("sum=%d\n",sum);

 return 0;
}
