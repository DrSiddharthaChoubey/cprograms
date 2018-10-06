#include<stdio.h>
 int main()
{
  long int n,i,cont=0,n1;
  printf("Enter any number = ");
  scanf("%ld",&n);
  n1=n;
  while(n1>0)
    {
       n1=n1/10;
        cont ++;
   }
  printf("%ld is having %ld digits",n,cont);
  return 0;
} 
  
