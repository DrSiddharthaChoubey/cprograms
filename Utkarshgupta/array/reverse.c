#include<stdio.h>
int main(){
int a[100],n,i,j,pos,item,temp;  
printf("\nenter size of array ");
scanf("%d",&n);
for(i=0;i<n;i++){
  printf("array ele a[%d] is",i);
  scanf("%d",&a[i]);
}
printf("array before reversing is\n");
for(i=0;i<n;i++)
   printf("%d\t",a[i]);

for(i=0;i<n/2;i++){
       temp=a[i];
       a[i]=a[n-1-i];
       a[n-1-i]=temp;
}     
printf("\nthe array after deleting element is \n");
for(i=0;i<n;i++)
  printf("%d\t",a[i]);
}

