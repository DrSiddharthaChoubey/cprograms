#include<stdio.h>
int main()
{
int a[10][10],b[10][10],r,c,i,j,flag=1;
printf("enter the value of row and column");
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
printf("original matrix");
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 printf("%d",a[i][j]);
}

printf("transpose matrix-->");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
printf("%d\t",b[i][j]);
printf("\n");
}

for(i=0;i<r&&flag==1;c++)
 {
  for(j=0;j<c;j++)
  {
   if(a[i][j]!=b[i][j])
    {
        flag=0;
        break;
    }
  }
 }

if(flag==1)
 printf("symmetric");
else
 printf("not symmetric");
return 0;
}
