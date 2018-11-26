#include<stdio.h>
int main()
{
int a[3][3],i,j;
printf("enter array elements");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
}
printf("two D array elements are-->");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
printf("%d\t",a[i][j]);
printf("\n");
}
return 0;
}
