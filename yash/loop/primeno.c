#include<stdio.h>
int main()
{
 int i,n;
 printf("Enter the number=");
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
 printf("%d is a prime number\n",n);

 else
 printf("%dis not a prime number\n",n); 

 return 0;
}
