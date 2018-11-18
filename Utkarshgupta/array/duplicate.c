#include<stdio.h>
#define SIZE1 5
#define SIZE2 5
#define SIZE3 10
int main(){
int a[SIZE1],b[SIZE2],c[SIZE3],i,j,k=0;  // write in sorted order

for(i=0;i<SIZE1;i++){
  printf("array ele a[%d] is",i);
  scanf("%d",&a[i]);
}
for(j=0;j<SIZE2;j++){
  printf("array ele b[%d] is",i);
  scanf("%d",&b[j]);
}
for(i=0,j=0;i<SIZE1,j<SIZE2;i++,j++){
    if(a[i]>b[j]){
       c[k]=b[j];
       k++;
       c[k]=a[i];
       k++;
       }
    else{
       c[i]=a[i];
       k++;
       c[k]=b[j];
       k++;
       }     
}
printf("the array after merging is \n");
for(i=0;i<SIZE3;i++)
  printf("%d\t",a[i]);
}

