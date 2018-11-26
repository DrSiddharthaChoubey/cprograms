#include<stdio.h>
#include<stdlib.h>
int main()
{
int choice,n,f,i;


while(1)
{
  printf("\t\t MENU");
  printf("\n\t 1.factorial\n");
  printf("\n\t 2.prime\n");
  printf("\n\t 3.odd/even\n");
  printf("\n\t 4.exit\n");
  printf("\n\t enter your choice");
  scanf("%d",&choice);
}
  switch(choice)
 {
     case 1: 
      f=1;
      printf("enter any number");
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      f=f*i;
      printf("\n 1.factorial\n");
         break;
     case 2:   
         printf("enter any number");
         scanf("%d",&n);
         for(i=2;i<=n;i++)
         {
          if(i==n)
           printf("%d is prime number",n);
          else
          printf("%d is not prime number",n);  
         }     
          break;
     case 3:
      printf("enter any number"); 
      scanf("%d",&n);
      {
      if(n%2==0)
       printf("%d is even number",n);
      else
       printf("%d is odd number",n);
       }
         break;
     case 4:
         exit(0);
     default:
       printf("\n\n invalid opinion");
  }     

return 0;
}












