#include<stdio.h>
#include<stdlib.h>
int main()
{
int choice,n,f,i;


while(1)
{
  printf("\t\tmenu\n");
  printf("\t 1.factorial\n");
  printf("\t 2.prime no.\n");
  printf("\t 3.even/odd\n");
  printf("\t 4.exit");
  printf("\n\nenter your choice");
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
    printf("enter number");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
     if(n%i==0)
     break;
     }
    if(i==n)
       printf("%d is prime no.",n);
    else 
       printf("%d is not a prime no. ",n);
    
   break;
  case 3:
      printf("enter number");
      scanf("%d",&n);
          
    if(n%2==0)
       printf("%d is even no",n);
   
    else 
       printf("%d is odd no. ",n);
    
   break;
  case 4:
    exit(0);
  default:
    printf("\n invalid option \n");
}
}
return 0;
}
