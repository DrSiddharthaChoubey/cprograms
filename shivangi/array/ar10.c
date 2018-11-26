#include<stdio.h>
int main()
{
int a[8],i,j,t;
printf("enter the elements of array ");
for(i=0;i<8;i++)
 scanf("%d",&a[i]);
 
for(i=1;i<8;i++)
{
 t=a[i];
  j=i-1;
  while(j>=0&&a[j]>t)
   {
     a[j+1]=a[j];
      j=j-1;
   }
  a[j+1]=t;
}
  printf("sorted array-->");
for(i=0;i<8;i++)
  printf("%d",a[i]);
return 0;
}
