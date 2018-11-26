#include<stdio.h>
int main()
{
int a[3][3]={2,1,3,4,6,5,9,8,7};
int i,j;
printf("two d array elements -");
for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    printf("%d\t",a[i][j]);
    printf("\n");
  }
return 0;
}
