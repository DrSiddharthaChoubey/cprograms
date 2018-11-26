#include<stdio.h>
int main()
{
int a[10][10],b[10][10],c[10][10],i,j,r,C;
printf("enter the row and col");
scanf("%d%d",&r,&C);
printf("enter first matrix value");
for(i=0;i<r;i++)
{
   for(j=0;j<C;j++)
scanf("%d",&a[i][j]);
}
printf("enter second matrix");
for(i=0;i<r;i++)
{ 
  for(j=0;j<C;j++)
  scanf("%d",&b[i][j]);
}
for(i=0;i<r;i++)
{
 for(j=0;j<C;j++)
{
  c[i][j]=a[i][j]+b[i][j];
  }
}
printf("first matrix\n");
for(i=0;i<r;i++)
{
 for(j=0;j<C;j++)
  printf("%d",a[i][j]);
 printf("\n");
}
printf("second matrix\n");
for(i=0;i<r;i++)
{
  for(j=0;j<C;j++)
    printf("%d",b[i][j]);
  printf("\n");
}
printf("after addition matrix\n");
for(i=0;i<r;i++)
{
for(j=0;j<C;j++)
printf("%d",c[i][j]);
printf("\n");
}
return 0;
}
