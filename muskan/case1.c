#include<stdio.h>
int main()
{
int choice,i,n,f=1;

   while(1)
{
printf("\n\t\tMENU");
printf("\n\t 1 FACTORIAL");
printf("\n\t 2 PRIME");
printf("\n\t 3 ODD\EVEN");
printf("\n\t 4 exit");
printf("enter your choice");
 scanf("%d",&choice); 
switch(choice)
{
case 1:
 f=1;
 printf("enter the number=");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 f=f*i;
 printf("fatorial of number=%d\n",f);
break;

case 2:
 printf("enter the number=");
 scanf("%d",&n);
 for(i=2;i<n;i++)
 {
  if(n%i==0)
  break;
 }
  if(i==n)
 printf("prime number\n");

  else
 printf("not a prime number\n"); 
break;

case 3:
 printf("enter the number=");
 scanf("%d",&n);

 if(n%2==0)

 printf("%d is even no",n);

  else
 printf("%d is odd no",n); 
break;

case 4:
printf("\n 4 exit");
break;
default:
printf("invalid option");
break;
}
}
return 0;
}
