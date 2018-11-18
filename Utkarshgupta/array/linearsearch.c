#include<stdio.h>
int main(){
int a[10],n,i,flag;
for(i=0;i<10;i++)
scanf("%d",&a[i]);
printf("enter ele to search");
scanf("%d",&n);
for(i=0;i<10;i++){
if(a[i]==n){
flag=1;
break;}
else
flag=0;
}
if (flag==1)
printf("item found at%d\n",i+1);
else
printf("item not found\n ");
}

