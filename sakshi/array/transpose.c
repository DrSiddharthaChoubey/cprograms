#include<stdio.h>
int main()
{
int a[10][10],b[10][10],r,c,j,i;
printf("enter the row at col value");
scanf("%d%d",&r,&c);
printf("enter array elements");
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
printf("original matrix\n");
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
  printf("%d\t",a[i][j]);
printf("\n");
}
printf("transpose matrix\n");
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
  printf("%d\t",b[i][j]);
printf("\n");
}
return 0;
}
