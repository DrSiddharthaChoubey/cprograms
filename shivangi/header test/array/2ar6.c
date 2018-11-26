#include<stdio.h>
int main()
{
int a[10][10],b[10][10],c[10][10],r,n,i,j;
printf("enter the value of row and column");
scanf("%d%d",&r,&n);
printf("enter the first matrix value");
for(i=0;i<r;i++)
{
 for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
}
printf("enter second matrix");
for(i=0;i<r;i++)
{
 for(j=0;j<n;j++)
     scanf("%d",&b[i][j]); 
}
for(i=0;i<r;i++)
{
  for(j=0;j<n;j++)
 {
   c[i][j]=a[i][j]+b[i][j];
 }
}
printf("first matrix=");
for(i=0;i<r;i++)
{
  for(j=0;j<n;j++)
    printf("%d",a[i][j]);
printf("\n");
}
printf("second matrix=");
for(i=0;i<r;i++)
{
for(j=0;j<n;j++)
    printf("%d",b[i][j]);
printf("\n");
}
printf("\nafter addition  matrix=\n");
for(i=0;i<r;i++)
{
   for(j=0;j<n;j++)
      printf("%d",c[i][j]);
   printf("\n");
}
return 0;
}
