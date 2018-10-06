#include<stdio.h>
int main()
{
int n,n1,count=0;
printf("enter the no");
scanf("%d",&n);
n1=n;
while(n1>0)
{
n1=n1/10;
count++;
}
printf("%d having a %d digits no",n,count);
return 0;
}
