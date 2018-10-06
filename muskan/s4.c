#include<stdio.h>
int main()
{
int n,i,j,k,l,s;
printf("enter the row ");
scanf("%d",&n);
    for(i=1;i<=n;i++)
{
s=1;
    for(j=n;j>i;j--)
 
printf(" %d ", s++);
 printf("\n");     

}
return 0;
}
