/*write a program to print all natural numbers from 1 to n*/
#include<stdio.h> 
int main()
{int n,i;
printf("enter the numeric value");
scanf("%d",&n);
i=n;
while(i>=1)
{
printf("%d\t",i);
i--;
}
return 0;
}
