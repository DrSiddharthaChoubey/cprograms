#include<stdio.h>
int main()
{
int n,reverse=0,temp;
printf("enter a no. to check if it is pallindrome or not\n");
scanf("%d",&n);
temp=n;
while(temp!=0)
{
 reverse=reverse*10;
 reverse=reverse+temp%10;
 temp=temp/10;
}
if(n==reverse)
 printf("%d is palindrome no.\n",n);
else
 printf("%d is not a palindrome no.\n",n);
return 0;
}
