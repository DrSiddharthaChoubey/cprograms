#include<stdio.h>
int evenorodd(int);
int main()
{
int a,b;
printf("enter a no. ");
scanf("%d",&a);
b=evenorodd(a);
if(b==1)
printf("%d is even",a);
else
printf("%d is odd",a);
return 0;
}

int evenorodd(int n)
{
if(n%2==0)
return 1;
else
return 0;
}
