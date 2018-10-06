#include<stdio.h>
int main()
{

int a,b,c,n;
printf("money to be withdrawn:");
scanf("%d",&n);
a=n/100;
n=n%100;
b=n/50;
n=n%50;
c=n/10;
n=n%10;

printf("no of hundreds=%d\nno of fifty's=%d\nno of ten's=%d",a,b,c);
return 0;
}


