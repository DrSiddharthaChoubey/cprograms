/*write a c program to print all natural number from 1 to n using while loop*/




#include<stdio.h>
int main()
{
int i,n;
printf("enter the value of n");
scanf("%d",&n);
i=1;
printf("natural numbers\n");
while(i<=n)
{
printf("%d\t",i);
i++;
}
return 0;
}

