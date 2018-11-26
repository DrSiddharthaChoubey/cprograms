#include<stdio.h>
int main()
{
int a[7],i,high,low,mid,item,flag=0;
printf("enter the element of array");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
printf("array elements are:");
for(i=0;i<10;i++)
printf("%d",a[i]);
printf("enter the item value you want to search");
scanf("%d",&item);
low=0,high=9;
mid=(low+high)/2;
while(low<=high)
{
if(a[mid]==item)
{
flag=1;
break;
}
if(item>a[mid])
low=mid+1;
else
high=mid-1;
mid=(low+high)/2;
}
if(flag==1)
printf("item found at %d position",mid+1);
else
printf("item found at %d position",mid-1);
return 0;
}
