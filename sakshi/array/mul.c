#include<stdio.h>
int main()
{
int a[10][10],b[10][10],c[10][10],i,j,k,r1,c1,r2,c2,sum=0;
printf("enter the row and col for first matrix");
scanf("%d%d",&r1,&c1);
printf("enter the row and col for second matrix");
scanf("%d%d",&r2,&c2);
if(c1==r2)
 {
  printf("enter first matrix value");
for(i=0;i<r1;i++)
{
   for(j=0;j<c1;j++)
scanf("%d",&a[i][j]);
}
printf("enter second matrix value");
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
printf("first matrix\n");
for(i=0;i<r1;i++)
{
   for(j=0;j<c1;j++)
   printf("%d\t",a[i][j]);
   printf("\n");
}
printf("second matrix\n");
for(i=0;i<r2;i++)
{
   for(j=0;j<c2;j++)
   printf("%d\t",b[i][j]);
   printf("\n");
}
printf("after multiplication possible\n");
  for(i=0;i<r1;i++)
{
   for(j=0;j<c1;j++)
 printf("%d\t",c[i][j]);
   printf("\n");
}
}
else
{
printf("multiplication not possible");
}
return 0;
}
