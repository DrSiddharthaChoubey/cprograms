#include <stdio.h>
int main ()
{

int a=1,n=1,mul=0;

printf ("enter ");
scanf ("%d",&a);


while (n<=10)
{ 
mul=a*n;
printf ("\n %d * %d = %d \n",a,n,mul);
n++;

}
//printf("%d",sum);

return 0;
}
