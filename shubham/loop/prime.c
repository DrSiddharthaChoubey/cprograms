#include<stdio.h>
int main()
{
int n,i;
printf("enter the number=");
scanf("%d",&n);
i=2;
while(i<n)
{
if(n%10==0)
break;
else
i++;
}
if(i==n)
printf("%d is the prime no",n);
else
printf("%d is non the prime no",n);
return 0;
}
