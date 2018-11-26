#include<stdio.h>
int main()
{
int n,a,rev=0;
printf("enter the five digit number");
scanf("%d",&n);
rev=rev*10
a=n%10;
n=n/10;
rev=rev+a*1000;
a=n%10;
n=n/10;
rev=rev+a*100;
a=n%10;
n=n/10;
rev=rev+a*10;
a=n%10;
rev=rev+a*1;
printf("rev of five digit number=%d",rev);
return 0;
}
