/* 4
  432
 43212
4321012*/

#include<stdio.h>
int main()
{
int s,n,i,j,k,l;
printf("enter the row ");
scanf("%d",&n);
    for(i=1;i<=n;i++)
{
s=n;
    for(j=n;j>i;j--)
 printf(" ");
        for(k=1;k<=i;k++)
printf(" %d ",s--);
s=s-1;
        for(l=1;l<i;l++)
printf("  %d  ",++s);
printf("\n");
}
return 0;
}
