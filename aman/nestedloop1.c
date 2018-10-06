#include<stdio.h>
int main()
{
int i,j,n;
printf("enter the value=");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
   for(j=n;j>=1;j--)
   printf("%d\t",j);
printf("\n");}
return 0;
}
