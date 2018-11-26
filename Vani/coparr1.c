#include<stdio.h>
int main()
{
int a[10][10],r,c,i,j,sum=0;
printf("enter the value of row and column");
scanf("%d%d",&r,&c);
printf("enter array element");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
scanf("%d",&a[i][j]);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
}
if(i==j||(i+j)<(r-1))
sum=sum+a[i][j];
}
}
printf("sum of diagonal=%d",sum);
return 0;
}
