#include<stdio.h>
int main()
{
int i,even=0,odd=0,a[10];
printf("enter the elemenets of array");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
printf("array elements are:");
for(i=0;i<10;i++)
printf("%d",a[i]);
for(i=0;i<10;i++)
{
   if(a[i]%2==0)
    even=even+a[i];
   else
    odd+=a[i];
}
printf("\neven=%d",even);
printf("\nodd=%d",odd);
return 0;
}












