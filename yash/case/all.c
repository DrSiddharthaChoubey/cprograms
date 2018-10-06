#include<stdio.h>
#include<stdlib.h>
int main()
{
 int choice,i,n,f=1;

 while(i)
 {
  printf("\t\t-:MENU:-\n\n");
  printf("\t 1. Factorial of a number\n");
  printf("\t 2. Prime number\n");
  printf("\t 3. Odd/Even\n");
  printf("\t 4. Exit\n\n\n");
  printf("\t\tEnter your choice=");
  scanf("%d",&choice);

  switch(choice)
  {
   case 1:

    printf("\n\n\t\t-:Factorial of a number:-\n\n");

    f=1;
    printf("\tEnter the number=");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    f=f*i;
    printf("\tFactorial of number %d=%d\n\n",n,f);
    break;

   case 2:

    printf("\n\n\t\t-:Prime number:-\n\n");

    printf("\tEnter the number=");
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
     if(n%i==0)
     break;
    }
    if(i==n)
    printf("\t%d is a prime number\n\n",n);

    else
    printf("\t%d is not a prime number\n\n",n);
    break;

   case 3:

    printf("\n\n\t\t-:Odd/Even:-\n\n");

    printf("\tEnter the number=");
    scanf("%d",&n);

    if(n%2==0)
    printf("\t%d is a even number\n\n",n);

    else
    printf("\t%d is a odd number\n\n",n);
    break;

   case 4:

    exit(0);

   default:

   printf("Invalid option\n\n");
  }
 }

 return 0;
}
