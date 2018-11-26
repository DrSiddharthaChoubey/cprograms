#include<stdio.h>
int main()
{
int a[10],i,n,pos,item;
printf("enter array size");
scanf("%d",&n);
printf("enter array element");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the position at item");
scanf("%d%d",&pos,&item);
for(i=n-1;i>=pos-1;i--)
a[i+1]=a[i];
a[i+1]=item;
n=n+1;
printf("after insertion array-->");
for(i=0;i<n;i++)
printf("%d",a[i]);
return 0;
}
















