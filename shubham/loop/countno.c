#include<stdio.h>
int main()
{
int n,count=0,n1;
printf("enter the no.=");
scanf("%d",&n);
n1=n;
while(n1>0)
{
n1=n1/10;
count++;
}
printf("%d nos are there in %d",count,n);
return 0;
}
