/* write a c prog to check palindrome of a 5 digit no*/



#include<stdio.h>
int main()
{
int n,a,n1,rev=0;
printf("enter any number");
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
printf("%d is not a palindrome",n);
return 0;
}
