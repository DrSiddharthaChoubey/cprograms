#include<stdio.h>
#include<stdlib.h>
int main()
{
int choice,i,n,f;
 while(1)
{
 printf("\t\t MENU");
 printf("\n 1.FACTORIAL\n");
 printf("\n 2.PRIME\n");
 printf("\n 3.ODD OR EVEN\n");
 printf("\n 4.EXIT\n");
 printf("\n\n enter your choice");
 scanf("%d",&choice);
  

   switch(choice)
{
   case 1:
   f=1;
    printf("\n enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    f=f*i;
    printf("factorial of %d=%d",n,f);
   break;
   case 2:
    printf("\n enter the number\n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
{
    if(n%i==0)
    break;
}
    if(i==n)
    printf("%d is prime",n);
    else
    printf("%d is nt prime",n);
   break;
   case 3:
    printf("\nenter the number\n");
    scanf("%d",&n);
    if(n%2==0)
    printf("%d is even",n);
    else
    printf("%d is odd",n);
   break;
   case 4:
    exit(0);
   default:
    printf("invalid operation\n");
}
}
return 0;
}

