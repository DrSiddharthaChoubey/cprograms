#include<stdio.h>
int main()
{
int n,a,sum=0;
printf("sum of the five digit no. is");
scanf("%d",&sum);
a=n%10;
n=n/10;
sum=sum+a;
a=n%10;
n=n/10;
sum=sum+a;
a=n%10;
n=n/10;
sum=sum+a;
a=n%10;
n=n/10;
sum=sum+a;
a=n%10;
n=n/10;
sum=sum+a;
a=n%10;
n=n/10;
sum=sum+a;
printf("sum of final no.=%d",sum);
return 0;
}
