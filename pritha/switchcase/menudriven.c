#include<stdio.h>
#include<stdlib.h>
int main()
{
int choice,i,n,f;
while(1)
{
  printf("\t\tMENU");
  printf("\n 1.Factorial\n");
  printf("\n 2.Prime\n");
  printf("\n 3.odd/even\n");
  printf("\n 4.Exit");
  printf("\n\n Enter your choice"); 
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:
      printf("enter number");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
         f=f*i;
     printf("factorial of %d=%d",n,f);
     break;
    case 2:
    printf("\n enter number");
     scanf("%d",&n);
     for(i=2;i<n;i++)
     {
       if(n%i==0)
        break;
     }
     if(i==n)
        printf(" %d is prime",n);
     else
        printf(" %d is not prime",n);
      break;
    case 3:
     printf("\nenter number");
     scanf("%d",&n);
     if(n%2==0)  
        printf(" %d is even number",n);
     else
        printf(" %d is odd number",n);
    break;
    case 4:
      exit(0);
     break;
 
    default:
       printf("\n Invalid option\n");
   }
}
return 0;
}


