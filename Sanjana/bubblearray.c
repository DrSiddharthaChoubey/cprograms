#include<stdio.h>
#define MAX 100
int main()
{
int a[MAX],i,j,temp,n;
printf(" enter array size");
scanf("%d",&n);
printf("enter array elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
 { 
  for(j=0;j<(n-1)-i;j++)
  {
   if(a[j]>a[j+1])
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
    }
   }
  }
printf("sorted arrays are:");
for(i=0;i<n;i++)
printf("%d",a[i]);
return 0;
} 
