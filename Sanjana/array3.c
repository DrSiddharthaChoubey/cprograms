#include<stdio.h>
int main()
{
int a[10],i,item,flag=0;
printf("enter the elements of array ");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
printf(" array elements are ");
for(i=0;i<10;i++)
printf("%d",a[i]);
printf(" \nenter the value of item want to search ");
scanf("%d ",&item);
for(i=0;i<10;i++)
 {
  if(a[i]==item)
   {
    flag=1;
    break;
   }
  }
if(flag==1)
printf(" item found at %d place ",i+1);
else
printf("item not found ");
return 0;
}
