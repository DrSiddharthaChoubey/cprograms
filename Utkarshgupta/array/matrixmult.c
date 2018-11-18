#include<stdio.h>
int main(){
int i,j,k,a[100][100],b[100][100],c[100][100],r2,c2,r1,c1,flag=1;
printf("enter value of rows and cols for matrix a\n");//matrix a
scanf("%d%d",&r1,&c1);
for(i=0;i<r1;i++){
  for(j=0;j<c1;j++){
    printf("ele a[%d][%d]=\n",i,j);
    scanf("%d",&a[i][j]);
 }    
}
printf("enter value of rows and cols for matrix b\n");//matrix b
scanf("%d%d",&r2,&c2);
for(i=0;i<r2;i++){
  for(j=0;j<c2;j++){
    printf("ele b[%d][%d]=\n",i,j);
    scanf("%d",&b[i][j]);
 }    
}
if(c1!=r2)
printf("matrix a and b can't be multiplied");
else{
        for(i=0;i<r1;i++){
           for(j=0;j<c2;j++)
              c[i][j]=0;}
	for(i=0;i<r1;i++){
	  for(j=0;j<c1;j++){
            for(k=0;k<c2;k++)
	      c[i][k]+=a[i][j]*b[j][k];
	    }
	    }
}
printf("matrix c=\n");
for(i=0;i<r1;i++){
  for(j=0;j<c2;j++)
    printf("%d\t",c[i][j]);
  printf("\n");
  }}
    
