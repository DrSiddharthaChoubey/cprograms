#include <stdio.h>
int main ()
{

int a,b,c,big;

printf ("\n enter numbers");
scanf ("%d%d%d",&a,&b,&c);

if (a>b&&b>c)
{
 big=a;
}

if (b>a&&b>c)
{
 big=b;
}

else 
{
 big=c;
}

printf ("great no is %d",big);

return 0;
}

