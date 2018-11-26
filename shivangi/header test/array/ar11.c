#include<stdio.h>
int main()
{
int a[10],i,pos,n,item;
printf("enter the array size:");
scanf("%d",&n);
printf("enter array elements");
for(i=0;i<n;i++)
 scanf("%d",&a[i]);

printf("enter the position as item");
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
