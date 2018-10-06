#include <stdio.h>

int main ()
{

int a,n,sum=0,i,m;

printf ("num ");
scanf ("%d",&a);
m=a;

for (i=0;i<3;++i)
{
n=a%10;
sum=sum+(n*n*n);
a=a/10;
}
printf ("%d sum is ",sum);
if (sum==m){
printf ("arm num");}
else{printf("no arm no");} 


return 0;
}




