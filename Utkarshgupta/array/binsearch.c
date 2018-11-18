#include<stdio.h>
int main(){
int a[8],n,i,mid,high=7,low=0,flag=0;  // write in sorted order
for(i=0;i<8;i++)
scanf("%d",&a[i]);
printf("enter ele to search");
scanf("%d",&n);

while (low<high){
  mid=(high+low)/2;
  if (a[mid]==n){
     flag=1;
     break;}
  else if (a[mid]>n)
    high=mid-1;
  else
    low=mid+1;
}
if (flag==1)
printf("item found at%d\n",mid+1);
else
printf("item not found\n ");
}

