#include<stdio.h>
int main()
{
int n,n1,a,sum=0;
printf("enter the no");
scanf("%d",&n);
n1=n;
while(n1>0)
{
a=n1%10;
sum=sum+a;
n1=n1/10;
}
printf("%d having a %d add no",n,sum);
return 0;
}
