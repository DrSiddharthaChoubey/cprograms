#include <stdio.h>

int main ()
{

int a,b,c,big,sum=0;

printf ("enter sides length");
scanf ("%d %d %d",&a,&b,&c);


if (a>b&&b>c)
{
 big=a;
if (b+c>big)
printf ("it forms a triangle");
else 
printf ("doesnot form a triangle");
}

if (b>a&&b>c)
{
 big=b;
if (a+c>big)
printf ("it forms a triangle");
else 
printf ("doesnot form a triangle");
}

else 
{
 big=c;
if (b+a>big)
printf ("it forms a triangle");
else 
printf ("doesnot form a triangle");
}



return 0;
}




