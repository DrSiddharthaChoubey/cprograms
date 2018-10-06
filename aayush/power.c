#include <stdio.h>
int main ()
{

int a,b,i,mul=1;

printf ("enter a and b");
scanf("%d %d",&a,&b);

for (i=1;i<=b;i++)
{
mul=mul*a;}

printf ("mul is %d",mul);

return 0;

}
