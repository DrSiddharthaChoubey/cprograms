#include<stdio.h>
void reverse();
void main()
{
int n;
printf("enter a no.");
scanf("%d",&n);
reverse(n);
}
void reverse()
{
int b,r=0;
b=n%10;
r=r*10+b;
n=n/10;
printf("%d",r);
}



