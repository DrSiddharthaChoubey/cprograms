#include<stdio.h>
int main()
{
int n;
printf("enter the value of n");
scanf("%d",&n);
switch(n%2)
{
case 0:
printf("n is even");
break;
default:
printf("n is odd");
break;
}
return 0;
}
