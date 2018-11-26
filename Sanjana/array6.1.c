#include<stdio.h>
#define MAX 100
int main()
{
int a[MAX],n,i,j,temp;
printf("enter array size");
scanf("%d ",&n);
printf("enter the array elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
 { 
  for(j=i+1;j<n;j++)
  {
   if(a[i]>a[j])
   {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    }
   }
  }
printf("sorted arrays are:");
for(i=0;i<n;i++)
printf("%d",a[i]);
return 0;
} 
