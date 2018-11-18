#include<stdio.h>
int main()
{
 int a[10][10],r,c,i,j,sum=0;

 printf("Enter the number of rows=");
 scanf("%d",&r);
 printf("Enter the number of cloumns=");
 scanf("%d",&c);

 printf("Enter the array elements=>\n");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  scanf("%d",&a[i][j]);
 }

 printf("\nThe given %dx%d matrix is--->\n\n",r,c);
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  printf("\t%d\t",a[i][j]);
  printf("\n");
 }

 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   if(i==j || (i+j)==(r-1))
   sum=sum+a[i][j];
  }
 }
  printf("\n\tSum of elements of upper diagonals of matrix=%d\n",sum);

 return 0;
}
