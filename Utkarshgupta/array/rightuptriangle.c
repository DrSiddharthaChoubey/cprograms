#include<stdio.h>
int main(){
int i,j,a[100][100],r,c,sum1=0,sum2=0;
printf("enter value of rows and cols");
scanf("%d%d",&r,&c);
for(i=0;i<r;i++){
  for(j=0;j<c;j++)
    scanf("%d",&a[i][j]);
     
}
for(i=0;i<r;i++){
  for(j=0;j<c;j++){
    if (i<j)//sum of upper right triangle
       sum1+=a[i][j];
}}
printf("\nsum is =%d\n",sum1);
for(i=0;i<r;i++){
  for(j=0;j<c;j++){
    if (i>j)//sum of lower left triangle
       sum2+=a[i][j];
}}
printf("\nsum2 is =%d\n",sum2);

}
