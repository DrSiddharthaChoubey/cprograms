#include<stdio.h>
int main()
{
int a[10],i,j,temp,n;
printf("enter the array size");
scanf("%d",&n);
printf("enter array elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0,j=n-1;i<=j;i++,j--)
{

    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
 }
 
printf("after inverse array elements");
for(i=0;i<n;i++)
printf("%d",i);
return 0;
}
