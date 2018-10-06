#include<stdio.h>
#include<stdlib.h>
int main()
{
int choice,i,n,f;
while(1)
{
   printf("\t\tMENU");
   printf("\n \t 1. factorial\n");
   printf("\n \t 2. prime\n");
   printf("\n \t 3. odd/even\n");
   printf("\n \t 4. exit\n");
   printf("\n\n enter your choice");
   scanf("%d",&choice);
   switch(choice)
{
      case 1:
         f=1;
         printf("enter number");
         scanf("%d",&n);
         for(i=1;i<=n;i++)
             f=f*i;
         printf("factorial of %d=%d",n,f);
         break;
      case 2: 
         printf("\nenter number\n");
         scanf("%d",&n);
         for(i=2;i<n;i++)
         {
           if(n%i==0)
              break;
         }
           if(i==n)
              printf("%d is prime",n);
           else
              printf("%d is not prime",n);
       
         break;
     case 3: 
         printf("\n\enter number\n");
         scanf("%d",&n);
         if(n%2==0)
               printf("%d is even number",n);
         else
                printf("%d is odd number",n);
         break;
    case 4: 
         exit(0);
   default:
    printf("\n invalid option\n");
}
}
return 0;
}
