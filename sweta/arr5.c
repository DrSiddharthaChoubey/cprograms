#include<stdio.h>
int main()
{
int a[7],i,count,flag=0,item;
printf("enter the elements of array");
for(i=0;i<7;i++)
scanf("%d",&a[i]);
printf("array elements are");
for(i=0;i<7;i++)
printf("%d",a[i]);
printf("enter the value of item u want to search");
scanf("%d",&item);
for(i=0;i<7;i++)
{
if(a[i]==item)
{
flag=1;
count++;
}
}
if (flag==1)
printf("frequency of %d is %d",item,count);
else
  printf("term not found");
return 0;
}
