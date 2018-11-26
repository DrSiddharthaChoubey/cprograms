#include<stdio.h>
int main()
{
int a[7],i,count=0,item;
printf("enter the array");
for(i=0;i<7;i++)
scanf("%d",&a[i]);
printf("array elements are-");
for(i=0;i<7;i++)
printf("%d",a[i]);
printf("enter the value u wanted to search");
scanf("%d",&item);
for(i=0;i<10;i++)
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
 printf("item not found");
return 0;
}
