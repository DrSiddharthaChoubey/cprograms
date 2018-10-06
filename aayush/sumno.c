#include <stdio.h>
int main ()
{
 int i,n,n1,sum=0;

printf("enter no ");
scanf ("%d",&n);
n1=n;


while(n>0)
{
i=n%10;
sum=sum+i;
n=n/10;
}

printf ("sum no is %d",sum);

return 0;
}

