/*write a program to print all natural number from (n to 1) to using while loop*/


#include<stdio.h>
int main()
{
int i,n;
printf("enter the value of n");
scanf("%d",&n);
i=n;
printf("\natural numbers---->\n");
while(i>=1)
{
printf("%d\t",i);
i--;
}
return 0;
}
