#include<stdio.h>
int main()
{
int i,item,flag=0,a[10];
printf("enter the elemenets of array");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
printf("array elements are:");
for(i=0;i<10;i++)
printf("%d",a[i]);
printf("enter the elements of value you want to search");
scanf("%d",&item);
for(i=0;i<10;i++)
{
if(a[i]==item)
{
flag=1;
break;
}
}
if(flag==1)
printf("item found a=%d place",i+1);
else
printf("item not found");
return 0;
}




