#include<stdio.h>
int evenodd(int);
int main()
{
int a,b;
printf("enter the value=");
scanf("%d",&a);
b=evenodd(a);
if(b==1)
printf("%d is even no.",a);
else
printf("%d is odd no.",a);
return 0;
}
int evenodd(int a)
{
if(a%2==0)
return 1;
else
return 0;
}

