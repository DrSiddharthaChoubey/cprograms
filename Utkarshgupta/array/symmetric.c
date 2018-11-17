#include<stdio.h>
int main(){
int i,j,a[100][100],b[100][100],r,c,flag=1;
printf("enter value of rows and cols\n");
scanf("%d%d",&r,&c);
for(i=0;i<r;i++){
  for(j=0;j<c;j++){
    printf("ele a[%d][%d]=\n",i,j);
    scanf("%d",&a[i][j]);
 }    
}
for(i=0;i<r;i++){
  for(j=0;j<c;j++)
     b[j][i]=a[i][j];
    }
for(i=0;i<r;i++){
  for(j=0;j<c;j++)
    printf("ele b[%d][%d]=%d\n",i,j,b[i][j]);
}
for(i=0;i<r && flag!=0;i++){
  for(j=0;j<c;j++)
    if(a[i][j]==b[i][j])
       flag=1;
    else{
       flag=0;
       break;}
}
if (flag==1)
printf("matrix is symmetric");
else
printf("matrix is not symmetric\n");
}
