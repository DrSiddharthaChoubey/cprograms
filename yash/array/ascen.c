#include<stdio.h>
int main()
{
 int a[5],i,j,temp;
 printf("Enter the elements of the array--->\n");

 for(i=0;i<5;i++)
 scanf("%d",&a[i]);

 for(i=0;i<4;i++)
 {
  for(j=1;j<5;j++)
  {
   if(a[i]>a[j])
   {
    temp=a[i];
    a[i]=a[j];
    a[j=temp];
   }
  }
 }
 printf("Sorted array==>\n");
 for(i=0;i<5;i++)
 printf("\t%d\n",a[i]);

 return 0;
}
