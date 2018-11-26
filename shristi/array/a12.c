#include<stdio.h>
int main()
{
int a[10],i,n,pos,item;
printf("enter array size");
scanf("%d",&n);
printf("enter array element");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the position");
scanf("%d",&pos);
for(i=pos;i<=n-1;i++)
a[i-1]=a[i];
n=n-1;
printf("after deletion array elements are-->");
for(i=0;i<n;i++)
printf("%d",a[i]);
return 0;
}

















