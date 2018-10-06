#include<stdio.h>
int main()
{
int n,a,rev=0,b;
printf("enter the five digit no:");
scanf("%d",&n);
b=n;

rev=rev*10+n%10;
n=n/10;

rev=rev*10+n%10;
n=n/10;

rev=rev*10+n%10;
n=n/10;
rev=rev*10+n%10;
n=n/10;

rev=rev*10+n%10;
printf("\nrev of digits=%d",rev);
if(rev==b)
printf("it is pallindrome no");

else
printf("it is not pallindrome no");
return 0;
}
