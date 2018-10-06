#include<stdio.h>
int main()
{
int a,n,rev=0,n1;

printf("enter the five digit number");
scanf("%d",&n);
n1=n;
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
n=n/10;
rev=rev+a*1;
printf("reverse of five digit number=%d",rev);
if(n1==rev)
printf("\noriginal number and reverse number are equal");
else
printf("\nnumber are not equal");
return 0;
}
