#include<stdio.h>
  int main()
{
    int n,i;
    printf("Enter any number=");
    scanf("%d",&n);
    i=2;
    while(i<n)
    {
        if(n%i==0)
          break;
        else 
           i++;
     }
   if(i==n)
    printf("%d is a prime number",n);
   else
     printf("%d is not a prime number",n);
 return 0;
}
