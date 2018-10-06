#include<stdio.h>
int main()
{
int n,a,rev=0;
printf("enter the five digi no");
scanf("%d",&n);
a=n%10;
n=n/10;
rev=rev+a*10000;
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
//n=n/10;
rev=rev+a*1;
printf("rev of five digit no=%d\n",rev);
return 0;
}


