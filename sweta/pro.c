#include<stdio.h>
int main()
{
int a[10][10],b[10][10],c[10][10],i,j,r1,c1,r2,c2,sum=0,k;
printf("enter the row and column for 1st matrix");
scanf("%d%d",&r1,&c1);
printf("\t\nenter the row and column for the 2nd matrix\n");
scanf("%d%d",&r2,&c2);
if(c1==r2)
{
printf("\t\nenter the value of 1st matrix\n");
printf("\t\nenter the value of 2nd matrix\n");
for(i=0;c2<r1;i++)
{
for(j=0;j<c2;j++)
{
sum=0;
for(k=0;k<c1;k++)
sum=sum+a[i][j]*b[i][j];
c[i][j]=sum;
}
}
printf("\t\nproduct of 1st matrix\n");
printf("\t\nproduct of 2nd matrix\n");
}
else
{
printf("\t\nidentification not possible\n");
}
return 0;
}
