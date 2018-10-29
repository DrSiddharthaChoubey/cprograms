#include<stdio.h>
int main()
{
 int a[10][10],b[10][10],sum[10][10],r,c,i,j;

 printf("Enter the number of rows=");
 scanf("%d",&r);
 printf("Enter the number of columns=");
 scanf("%d",&c);

 printf("\nEnter the first matrix value=\n");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  scanf("%d",&a[i][j]);
 }

 printf("Enter the second matrix value=\n");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  scanf("%d",&b[i][j]);
 }

 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  sum[i][j]=a[i][j]+b[i][j];
 }

 printf("First matrix===>\n\n");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  printf("\t%d\t",a[i][j]);
  printf("\n");
 }

 printf("Second matrix===>\n\n");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  printf("\t%d\t",b[i][j]);
  printf("\n");
 }

 printf("Addition of matrix===>\n\n");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  printf("\t%d\t",sum[i][j]);
  printf("\n");
 }


 return 0;
}
