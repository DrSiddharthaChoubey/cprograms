/*program  the number is palindrome*/
#include<stdio.h>
int main()
{
int n,n1,rev=0,a;
printf("enter the number");
scanf("%d",&n);
n1=n;
while(n1>0)
{
a=n1%10;
rev=a+rev*10;
n1=n1/10;
}
if(n==rev)
printf("%d is palindrome",n);
else
printf("%d is not palindrome",n);
return 0;
}

