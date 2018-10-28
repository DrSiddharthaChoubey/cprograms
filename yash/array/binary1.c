#include<stdio.h>
int main()
{
 int a[10],i,mid,low,high,item,flag;
 printf("Enter the elements of the array--->\n");
 for(i=0;i<10;i++)
 scanf("%d",&a[i]);

 printf("Array elements are\n");
 for(i=0;i<10;i++)
 printf("%d\n",a[i]);

 printf("Enter the item value you want to search=");
 scanf("%d",&item);

 low=0;
 high=9;

 mid=(low+high)/2;

 while(low<high)
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
 printf("\n\n\tItem found at %d position\n",mid+1);
 else
 printf("\n\n\tItem not found\n");

 return 0;
}
