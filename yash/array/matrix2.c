#include<stdio.h>
int main()
{
 int a[3][3]={1,2,3,4,5,6,7,8,9},i,j;

 printf("\nThe given 3x3 matrix is--->\n\n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  printf("\t%d\t",a[i][j]);
  printf("\n");
 }

 return 0;
}

