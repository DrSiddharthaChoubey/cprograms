/*write a c program to print all natural numbers in reverse from  n to 1 using while loop*/

#include<stdio.h>
int main()
{
int i,n;
printf("enter the value of n");
scanf("%d",&n);
i=n;
printf("\nnatural numbers >\n");
while(i>=1)
{
printf("%d\t",i);
i--;
}
return 0;
}

