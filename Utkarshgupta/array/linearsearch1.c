#include<stdio.h>
int main(){
int a[10],n,i,count=0;
for(i=0;i<10;i++)
scanf("%d",&a[i]);
printf("enter ele to search");
scanf("%d",&n);
for(i=0;i<10;i++){
if(a[i]==n)
count++;
}

if (count==0)
printf("item not found\n ");
else
printf("item=%d found %d times\n",n,count);
}
