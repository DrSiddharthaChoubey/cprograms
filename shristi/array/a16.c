#include<stdio.h>
int main()
{
int a[10][10],b[10][10],r,c,i,j;
float flag=1;
printf("enter row and col value");
scanf("%d%d",&r,&c);
printf("enter array element");
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
printf("transpose matrix:");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
printf("%d",b[i][j]);
}

for(i=0;i<r&&flag==1;i++)
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
printf("\nsymmetric");
else
printf("\nnot symmetric");
return 0;
}

