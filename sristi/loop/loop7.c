/*write a c program to print all odd natural number between 1 to n using while loop*/




#include<stdio.h>
int main()
{
int i,n,sum=0;
for(i=1;i<=100;i++)
{
if(i%2==0)
sum=sum+i;
}
printf("sum of all odd natural no.=%d",sum);
return 0;
}


