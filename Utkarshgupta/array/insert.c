#include<stdio.h>
int main(){
int a[100],n,i,j,pos,item,temp;  // write in sorted order
printf("\nenter size of array and pos and item");
scanf("%d%d%d",&n,&pos,&item);
for(i=0;i<n;i++)
  printf("array ele a[%d] is",i);
  scanf("%d",&a[i]);

for(i=n-1;i>=pos-1;i--){
  
       a[i+1]=a[i];
       }     
a[pos-1]=item;
printf("the array after inserting element is \n");
for(i=0;i<n+1;i++)
  printf("%d\t",a[i]);
}

