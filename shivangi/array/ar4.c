#include<stdio.h>
int main()
{
int a[10],i,item,flag=0;
printf("enter the elements of array:");
for(i=0;i<10;i++)
 scanf("%d",&a[i]);
printf("array elements are-->");
for(i=0;i<10;i++)
 printf("%d",a[i]);
printf("enter the value of item u want to search:");
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
printf("items found at %d place",i+1);
printf("item not found");
return 0;
}
