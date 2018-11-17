#include<stdio.h>
#define MAX 100
int main(){
int a[MAX],n,i,j,temp;  // write in sorted order
printf("\nenter size of array");
scanf("%d",&n);
for(i=0;i<n;i++)
  scanf("%d",&a[i]);

for(i=0;i<n-1;i++){
  for (j=i+1;j<n;j++){
    if (a[i]>a[j]){
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;}
}     
}
printf("the array in sorted manner is \n");
for(i=0;i<n;i++)
  printf("%d\t",a[i]);
}

