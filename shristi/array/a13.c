#include<stdio.h>
int main()
{
int a[10],i,j,n,temp;
printf("enter array size:");
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
printf("after reverse array element are-->");
for(i=0;i<n;i++)
printf("%d",a[i]);
return 0;
}






















