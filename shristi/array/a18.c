#include<stdio.h>
int main()
{
int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2,i,j,k,sum=0;
printf("enter the row and col for matrix 1");
scanf("%d%d",&r1,&c1);
printf("for matrix 2");
scanf("%d%d",&r2,&c2);
if(c1==r2)
{
printf("enter 1st matrix:");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
scanf("%d",&a[i][j]);
}

printf("enter 2nd matrix:");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
scanf("%d",&b[i][j]);
}

for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
for(k=0;k<c1;k++)
sum=sum+a[i][k]*b[k][j];
c[i][j]=sum;
}
}
printf("FIRST MATRIX\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
scanf("%d",&a[i][j]);
}
printf("SECOND MATRIX\n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
scanf("%d",&b[i][j]);
}


for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
for(k=0;k<c1;k++)
sum=sum+a[i][k]*b[k][j];
c[i][j]=sum;
}
}

/*

printf("enter 1st matrix:");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
printf("\t%d",a[i][j]);
printf("\n");
}

printf("enter 2nd matrix:");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
printf("\t%d",b[i][j]);
printf("\n");
}

for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
for(k=0;k<c1;k++)
sum=sum+a[i][k]*b[k][j];
c[i][j]=sum;
}
}*/

printf("enter 1st matrix:");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
printf("\t%d",a[i][j]);
printf("\n");
}

printf("enter 2nd matrix:");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
printf("\t%d",b[i][j]);
printf("\n");
}
printf("after multiplication matrix is:");

for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
printf("\t%d",c[i][j]);
printf("\n");
}
}
else
{
printf("mul is not possible");
}
return 0;
}












































































