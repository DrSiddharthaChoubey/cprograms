#include <stdio.h>
int main ()
{

int a,n,rev=0,a1;
printf (" enter no.");
scanf ("%d",&a1);
a=a1;

while (a1>0)
{
n=a1%10;
rev=n+rev*10;
a1=a1/10;
}

printf ("rev = %d",rev);
return 0;
}

