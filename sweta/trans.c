#include<stdio.h>
int main()
{
int a[10][10],b[10][10],i,j,r,c;
printf("\t\nenter the row and column\n");
scanf("%d%d",&r,&c);
printf("\t\nenter array elements\n");
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
printf("\t\noriginal material\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
printf("%d\t",a[i][j]);
printf("\n");
}
printf("\t\ntranspose matrix\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
printf("%d\t",b[i][j]);
printf("\n");
}
return 0;
}
