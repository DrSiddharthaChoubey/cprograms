/*write a program to find the sum of all natural no b/w 1to n using while loop*/

#include<stdio.h>
int main()
{
int i,n,sum=0;
printf("enter the value of n");
scanf("%d",&n);
for(i=1;i<=n;i++)
sum=sum+i;
printf("sum=%d",sum);
return 0;
}
