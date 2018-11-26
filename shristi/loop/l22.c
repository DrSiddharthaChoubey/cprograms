/*WAP to print */

#include<stdio.h>
int main()
{
int i,j,n,k,s;
printf("enter the no of row");
scanf("%d",&n);
s=9;
for(i=1;i<=n;i++)
{
 
 for(j=n;j>i;j--)
   printf("\t");
 
 for(k=1;k<=i;k++)
   printf("\t%d",s);
    s--;
printf("\n");
}
return 0;
}
