#include<stdio.h>
int main()
{
int n,n1,sum=0,a;
printf("enter the no.=\n");
scanf("%d",&n);
n1=n;
while(n1>0)
{
a=n1%10;
sum=sum+a;
n1=n1/10;
}
printf("%d is the sum of %d number",sum,n);
return 0;
}
