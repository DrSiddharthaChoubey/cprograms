#include<stdio.h>
int main()
{
int n,n1,count=0;
printf("\nenter the number \n");
scanf("%d",&n);
n1 = n;
while(n1 > 0)
  {
    n1 = n1/10;
    count++;
   }
printf("\nnumber of digit in %d is : %d",n1,count);
return 0;

