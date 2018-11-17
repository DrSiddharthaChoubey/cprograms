#include<stdio.h>
int main(){
int a[100],n,i,j,pos,item,temp;  
printf("\nenter size of array and pos ");
scanf("%d%d",&n,&pos);
for(i=0;i<n;i++){
  printf("array ele a[%d] is",i);
  scanf("%d",&a[i]);
}
a[pos-1]=0;
for(i=pos-1;i<n-1;i++){
  
       a[i]=a[i+1];
       }     
n-=1;
printf("the array after deleting element is \n");
for(i=0;i<n;i++)
  printf("%d\t",a[i]);
}

