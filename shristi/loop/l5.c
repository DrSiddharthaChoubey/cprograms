/* write a c prog to check number entered is prime no ar not*/



#include<stdio.h>
int main()
{
int n,i;
printf("enter any number");
scanf("%d",&n);
i=2;
while(i<n)/*n/2 or rootn*/
{
 if(n%i==0)
    break;
 else
   i++;
}
if(i==n)
printf("%d is prime no",n);
else
printf("%d is not a prime no",n);
return 0;
}
