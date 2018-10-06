#include<stdio.h>
int main()
{
int n,n1,rev=0,a;
printf("enter the number=");
scanf("%d",&n);
n1=n;
while(n1>0)
{
a=n1%10;
rev=a+rev*10;
n1=n1/10;
}

printf("%d is the reverse of %d",rev,n);
if(n1==rev)
printf("it is palindrome");
else
printf("its nt");
return 0;
}

