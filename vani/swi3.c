#include<stdio.h>
#include<stdlib.h>
int main()
{
int choice,n,i,f;
while(1)
{
printf("\n\t MENU");
printf("\n\t 1.factorial");
printf("\n \t 2.prime");
printf("\n\t 3.odd/even");
printf("\n \t 4.exit");
printf("\n\t enter the you choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("\n\t enter the no.");
scanf("%d",&n);
for(i=1;i<=n;i++);
f=f*i;
printf("\t\t\t\t\t\t\t\t\tfac=%d",f);
break;
case 2:
printf("\n\t enter the no.");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
break;
}
if(i==n)
printf("\t\t\t\t\t\t\tis prime");
else
printf("\t\t\t\t\t\t\t\t not a prime");
break;
case 3:
printf("\n\t enter the no.");
scanf("%d",&n);
if(n%2==0)
printf("\n\t\t\t\t\t\t\t\tno.is even");
else
printf("\n\t\t\t\t\t\t\t\tno.is odd");
break;
case 4:
exit(0);
break;
default:
printf("\n \t  invalid option");
}
}
return 0;
}
