#include<stdio.h>
int main()
{
int a[10],i,mid,high,low,item,flag=0;
printf("enter the elements of array ");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
printf(" array elements are ");
for(i=0;i<10;i++)
printf("%d",a[i]);
printf(" \nenter the value of item want to search ");
scanf("%d ",&item);
low=0;
high=9;
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
printf("item found at %d positn ",mid+1);
else("item not found");
return 0;
}

