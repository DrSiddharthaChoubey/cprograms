#include<stdio.h>
int main()
{
int a[5],i;
printf("enter the array");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
printf("array elements are-");
for(i=0;i<5;i++)
printf("%d",a[i]);
for(i=0;i<5;i++)
 a[i]=a[i]+2;
printf("after adding araay elements are-");
for(i=0;i<5;i++)
printf("%d",a[i]);
return 0;
}
