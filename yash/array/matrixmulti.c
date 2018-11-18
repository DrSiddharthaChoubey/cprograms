#include<stdio.h>
int main()
{
 int a[10][10],b[10][10],multi[10][10],r1,c1,r2,c2,sum=0,i,j,k;

 printf("Enter the value of rows and columns of first matrix=\n");
 scanf("%d%d",&r1,&c1);
 printf("Enter the value of rows and columns of second matrix=\n");
 scanf("%d%d",&r2,&c2);

 if(c1==r2)
 {
  printf("Enter the first matrix value--->\n");
  for(i=0;i<r1;i++)
  {
   for(j=0;j<c1;j++)
   scanf("%d",&a[i][j]);
  }

  printf("Enter the second matrix value--->\n");
  for(i=0;i<r2;i++)
  {
   for(j=0;j<c2;j++)
   scanf("%d",&b[i][j]);
  }
  for(i=0;i<r1;i++)
  {
   for(j=0;j<c2;j++)
   {
    sum=0;
    for(k=0;k<c1;k++)
    sum=sum+a[i][k]*b[k][j];
    multi[i][j]=sum;
   }
  }

  printf("First matrix==>\n\n");
  for(i=0;i<r1;i++)
  {
   for(j=0;j<c1;j++)
   printf("\t%d\t",a[i][j]);
   printf("\n");
  }

  printf("Second matrix==>\n\n");
  for(i=0;i<r2;i++)
  {
   for(j=0;j<c2;j++)
   printf("\t%d\t",b[i][j]);
   printf("\n");
  }

  printf("Multiplication of matrix==>\n");
  for(i=0;i<r1;i++)
  {
   for(j=0;j<c2;j++)
   printf("\t%d\t",multi[i][j]);
   printf("\n");
  }
 }

 else
 printf("\nMultiplication is not possible\n");

 return 0;
}
