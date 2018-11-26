#include<stdio.h>
int main()
{
int a[10][10],b[10][10],i,j,d[10][10],r,c;
printf("enter row and column");
scanf("%d%d",&r,&c);
printf("enter first matrix");
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
    scanf("%d",&a[i][j]);
}
printf("enter second matrix");
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
   scanf("%d",&b[i][j]);
}
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
{
 d[i][j]=a[i][j]+b[i][j];
}
}
printf("FIRST MATRIX:");
 for(i=0;i<r;i++)
{
  for(j=0;j<c;j++) 
   printf("%d",a[i][j]);
}
printf("SECOND MATRIX:");
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
   printf("%d",b[i][j]);
}
printf("ADDITION OF MATRIX:");
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
   printf("%d",d[i][j]);
}
return 0;
}





















