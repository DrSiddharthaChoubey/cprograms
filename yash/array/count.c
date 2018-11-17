#include<stdio.h>
int main()
{
 int a[7],i,count=0,flag=0,item;
 printf("Enter the elements of array--->\n");
 for(i=0;i<7;i++)
 scanf("%d",&a[i]);

 printf("Array elements are=>\n");
 for(i=0;i<7;i++)
 printf("%d\n",a[i]);

 printf("Enter the item value you want to search=");
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
 printf("\n\n\tFrequency of %d is %d\n",item,count);
 else
 printf("\n\n\tItem not found\n");

 return 0;
}
