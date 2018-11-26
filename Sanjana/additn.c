#include<stdio.h>
int main()
{
int a[10][10],i,j,r,c,b[10][10],d[10][10];
printf("enter row and coloumns");
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
printf("first matrix");
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
  printf("%d",a[i][j]);
printf("\n");
}
printf("second matrix");
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
  printf("%d",b[i][j]);
printf("\n");
}
printf("after addition of matrix");
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
  {
   printf("%d",d[i][j]);
  } 
printf("\n");
}
return 0;
}



