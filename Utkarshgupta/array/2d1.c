#include<stdio.h>
int main(){
int i,j,a[100][100],r,c;
printf("enter value of rows and cols");
scanf("%d%d",&r,&c);
for(i=0;i<r;i++){
  for(j=0;j<r;j++)
    scanf("%d",&a[r][c]);
     
}
for(i=0;i<3;i++){
  for(j=0;j<3;j++)
    printf("a[%d][%d]is%d\n",i,j,a[i][j]);}
for(i=0;i<3;i++){
  for(j=0;j<3;j++)
    printf("%d\t",a[i][j]);
  printf("\n");
}
}
