/*write a program to print all even numbers b/w 1to 100 using while loop*/


#include<stdio.h>
int main()
{
int i;
for(i=1;i<=100;i++)
{
if(i%2==0)
printf("%d\t",i);
}
return 0;
}
