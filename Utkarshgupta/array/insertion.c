#include<stdio.h>
#define MAX 100
int main(){
int a[MAX],n,i,j,temp;  // write in sorted order
printf("\nenter size of array");
scanf("%d",&n);
for(i=0;i<n;i++)
  scanf("%d",&a[i]);

for(i=1;i<n;i++){
  temp=a[i];//temporarary storage
  j=i-1;//to back pointer
  while(j>=0 && a[j]>temp){//to put value of temp value appropriate pos.
    a[j+1]=a[j];
    j-=1;
}
  a[j+1]=temp;     
}
printf("the array in sorted manner is \n");
for(i=0;i<n;i++)
  printf("%d\t",a[i]);
}

