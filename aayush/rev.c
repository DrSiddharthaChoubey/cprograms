#include <stdio.h>
int main ()
{

int a,b,sum=0,n;

printf (" enter a 5 digit no ");
scanf ("%d", &n);

a=n;
b=n%10;
n=n/10;
sum=sum+b*10000;


b=n%10;
n=n/10;
sum=sum+b*1000;

b=n%10;
n=n/10;
sum=sum+b*100;

b=n%10;
n=n/10;
sum=sum+b*10;

b=n%10;
n=n/10;
sum=sum+b*1;

printf ("reverse no is %d",sum);

if (sum==a)
{printf ("pallindrom");}

else 
{printf ("not equal");}

return 0;
}


