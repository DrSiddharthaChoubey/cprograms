#include<stdio.h>
int main()
{
int a,n,rev=0,n1;
printf("enter the five digit no");
scanf("%d",&n);
rev=(rev*10)+(n%10);
n=n/10;
a=n%10;
rev=(rev*10)+(n%10);
n=n/10;
a=n%10;
rev=(rev*10)+(n%10);
n=n/10;
a=n%10;
rev=(rev*10)+(n%10);
n=n/10;
a=n%10;
rev=(rev*10)+(n%10);
n=n/10;
a=n%10;
rev==rev+a*1;
printf("rev of five digit no=%d",rev);
if(n==rev)
printf("\n the original and reverse no are equal");
else
printf("\n the original and reverse no are not equal");
return 0;
}
