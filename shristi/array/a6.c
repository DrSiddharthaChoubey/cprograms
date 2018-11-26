#include<stdio.h>
int main()
{
int a[7],i,count=0,flag=0,item;
printf("enter the element of array");
for(i=0;i<7;i++)
scanf("%d",&a[i]);
printf("array elements are:");
for(i=0;i<7;i++)
printf("%d",a[i]);
printf("enter the item value you want to search");
scanf("%d",&item);
for(i=0;i<7;i++)
{
if(a[i]==item)
{
flag=1; 
count++;
}
}
if(flag==1)
printf("frequency of %d is %d times",item,count);
else
printf("not found");
return 0;
}
















