#include<stdio.h>
int main()
{
int a[10],i,evensum=0,oddsum=0;
printf("enter the elements of array");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
printf("array elements ae-");
for(i=0;i<10;i++)
printf("%d",a[i]);
for(i=0;i<10;i++)
{
if(a[i]%2==0)
evensum+=a[i];
else
oddsum+=a[i];
}
printf("evensum=%d oddsum=%d\n",evensum,oddsum);
return 0;
}


