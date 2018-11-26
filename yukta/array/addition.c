#include<stdio.h>
int main()
{
int a[10][10],b[10][10],c[10][10],r,C,j,i;
printf("enter row and col value\n");
scanf("%d%d",&r,&C);
printf("enter first mattrix value\n");
for(i=0;i<r;i++)
{
for(j=0;j<C;j++)
scanf("%d",&a[i][j]);
}
printf("enter second mattrix value\n");
for(i=0;i<r;i++)
{
for(j=0;j<C;j++)
scanf("%d\t",&b[i][j]);
}
for(i=0;i<r;i++)
{
for(j=0;j<C;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
printf("first mattrix-\n");
for(i=0;i<r;i++)
{
for(j=0;j<C;j++)
printf("%d\t",a[i][j]);
}
printf("second mattrix-\n");
for(i=0;i<r;i++)
{
for(j=0;j<C;j++)
printf("%d\t",b[i][j]);
}
printf("after adittion mattrix-\n");
for(i=0;i<r;i++)
{
for(j=0;j<C;j++)
printf("%d\t",c[i][j]);
}
return 0;
}
