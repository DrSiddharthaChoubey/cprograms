#include<stdio.h>
int main()
{
int a,n,rev=0;
printf("enter  the five digit number");
scanf("%d",&n);
rev=(rev*10)+(n%10);
n=n/10;
rev=(rev*10)+(n%10);
n=n/10;
rev=(rev*10)+(n%10);
n=n/10;                                           
rev=(rev*10)+(n%10);
n=n/10;
rev=(rev*10)+(n%10);
n=n/10;
printf("reverse of five digit number=%d",rev);
if(n=rev)
printf("\nthe original and reverse number are equal");
else
printf(" \nthe original and reverse number are not equal");
return 0;
}
