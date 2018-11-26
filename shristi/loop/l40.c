/* WAP to print prime number betn 0 10 100*/

#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=100;i++)
{
 for(j=2;j<i;j++)
 { 
  if(i%j==0)
   break;
 } 
   if(i==j)
   printf(" \n %d is prime number",i);
}
return 0;
}





