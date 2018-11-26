/*adding 2 in array */
#include<stdio.h>
int main()
{
int a[5],i;
printf("enter the elements of array");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
printf("array elements are");
for(i=0;i<5;i++)
printf("%d",a[i]);
for(i=0;i<5;i++)
a[i]=a[i]+2;
printf("after adding array elements are");
for(i=0;i<5;i++)
printf("%d",a[i]);
return 0;
}
