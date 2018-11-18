#include<stdio.h>
#define MAX 100
int main(){
int a[MAX],n,i,j,temp;  // write in sorted order
printf("\nenter size of array");
scanf("%d",&n);
for(i=0;i<n;i++)
  scanf("%d",&a[i]);

for(i=0;i<n-1;i++){
  for (j=0;j<n-1-i;j++){
    if (a[j+1]<a[j]){
       temp=a[j];
       a[j]=a[j+1];
       a[j+1]=temp;}
}     
}
printf("the array in sorted manner is \n");
for(i=0;i<n;i++)
  printf("%d\t",a[i]);
}

