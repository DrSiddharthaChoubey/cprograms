#include<stdio.h>
int main()
{
int a[3][3]={2,1,4,
             3,5,6,
             8,7,9};
int i,j;
printf("2D array elements are-->");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
printf("%d\t",a[i][j]);
printf("\n");
}
return 0;
}



























