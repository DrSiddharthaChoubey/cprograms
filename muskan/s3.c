#include<stdio.h>
int main()
{
int n,i,j,k,l,s;
printf("enter the row ");
scanf("%d",&n);

s=n;
    for(i=1;i<=n;i++)
{
    for(j=n;j>=i;j--)
 
printf(" %d ", s);
s=s-1;
 printf("\n");     

}
return 0;
}
