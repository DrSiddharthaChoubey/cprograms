#include<stdio.h>
#include<stdlib.h>
int main()
{
int choice,i,n,f;
while(1)
{
printf("\t\tMENU\n");
printf("\n\t 1.Factorial\n");
printf("\n\t 2.Prime\n");
printf("\n\t 3.Even/odd\n");
printf("\n\t 4.Exit\n");
printf("\n\t\t Enter ur choice");
scanf("%d",&choice);

switch(choice)
{
case 1:
f=1;
printf("enter the no.\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
f=f*i;
printf("factorial of %d=%d",n,f);
break;
case 2:
printf("enter the no.=");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
if(n%i==0)
break;
}
if(i==n)
printf("its prime no.");
else
printf("its nt prime no.");
break;
case 3:
printf("enter the no.");
scanf("%d",&n);
if(n%2==0)
printf("no. is even");
else
printf("no. is odd");
break;
case 4:
exit(0);
default:
printf("\n\nINVALID INPUT\n");
}
}
return 0;
}
