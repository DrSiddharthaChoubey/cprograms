#include <stdio.h>

int main ()
{

int a;

printf ("enter no of days late submission");
scanf (" %d",&a);

if (a>=1&&a<=5)
printf ("you have to pay %f ",a*.5);

else if (a>=6&&a<=10)
printf (" pay %d",a*1);

else if (a>10&&a<30)
printf (" pay %d",a*10);

else 
printf ("membership cancelled ");

return 0;
}
