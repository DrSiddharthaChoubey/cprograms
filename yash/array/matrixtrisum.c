#include<stdio.h>
int main()
{
 int a[10][10],r,c,i,j,sum1=0,sum2=0,sum3=0,sum4=0;

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
   if(i<j)
   sum1=sum1+a[i][j];
  }
 }
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   if(i>j)
   sum2=sum2+a[i][j];
  }
 }
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   if((i+j)>=r)
   sum3=sum3+a[i][j];
  }
 }
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   if((i+j)<(r-1))
   sum4=sum4+a[i][j];
  }
 }

 printf("\n\tSum of elements of right upper triangle of matrix=%d\n",sum1);
 printf("\n\tSum of elements of left lower triangle of matrix=%d\n",sum2);
 printf("\n\tSum of elements of right lower triangle of matrix=%d\n",sum3);
 printf("\n\tSum of elements of left upper triangle of matrix=%d\n",sum4);

 return 0;
}
