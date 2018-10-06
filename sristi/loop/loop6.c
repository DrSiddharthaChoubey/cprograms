/*write a c program to print all natural number between 1 to 100 using while loop*/




#include<stdio.h>
int main()
{
int i,n,sum=0;
printf("enter the end point for sum of natural no.s");
scanf("%d",&n);
for(i=1;i<=n;i++)
sum=sum+i;
printf("sum=%d",sum);
return 0;
}


