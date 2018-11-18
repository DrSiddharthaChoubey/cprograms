#include<stdio.h>
int main()
{
 int a[10][10],b[10][10],i,j,r,c;

 printf("Enter the value of rows=");
 scanf("%d",&r);
 printf("Enter the value of columns=");
 scanf("%d",&c);

 printf("Enter the array elements==>\n");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  scanf("%d",&a[i][j]);
 }

 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  b[j][i]=a[i][j];
 }

 printf("Original matrix--->\n\n");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  printf("\t%d\t",a[i][j]);
  printf("\n");
 }

 printf("Transpose matrix--->\n\n");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  printf("\t%d\t",b[i][j]);
  printf("\n");
 }

 return 0;
}
