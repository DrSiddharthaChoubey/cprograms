#include<stdio.h>
void show(int a[][4],int r,int c){
   int i,j;
    for(i=0;i<r;i++){
      for(j=0;j<c;j++)
         printf("%d\t",a[i][j]);
       printf("\n");
}
}
void put(int(*a)[4],int r,int c){
   int *p,i,j;
    for(i=0;i<r;i++){
        p=a+i;
      for(j=0;j<c;j++)
         printf("%d\t",*(p+j));
       printf("\n");
}
}
void disp(int *a,int r,int c){
   int *p,i,j;
    for(i=0;i<r;i++){
      for(j=0;j<c;j++)
         printf("%d\t",*(a+i*c*j));
       printf("\n");
}
}
int main(){
int i,j,k;
int a[3][4]={1,2,3,4
,5,6,7,8,
9,10,11,12};
show(a,3,4);
put(a,3,4);
disp(a,3,4);
}


 


    
