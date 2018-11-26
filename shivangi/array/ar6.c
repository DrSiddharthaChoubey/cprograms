#include<stdio.h>
int main()
{
int a[10],i,mid,high,low,item,flag=0;
printf("enter the elements of array in sorted order:");
for(i=0;i<10;i++)
 scanf("%d",&a[i]);
printf("array elements are-->");
for(i=0;i<10;i++)
 printf("%d",a[i]);
printf("enter the value of item u want to search:");
scanf("%d",&item);
low=0;high=9;
mid=(low + high)/2;
{
if(a[mid]==item);
{
flag=1;
break;
if(item>a[mid])
low=mid+1;
else
high=mid-1;
mid=(low+high)/2;
}
if (flag==1)
  printf("item found at %d position",mid+1);
else
  printf("item not found");
return 0;
}
