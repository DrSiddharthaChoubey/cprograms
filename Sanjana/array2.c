#include<stdio.h>
int main()
{
int a[10],i,even=0,odd=0;
printf("enter the elements of array ");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
printf(" array elements are ");
for(i=0;i<10;i++)
printf("%d",a[i]);
for(i=0;i<10;i++)
  {
   if(a[i]%2==0)
    even=even+a[i];
   else
    odd=odd+a[i];
  }
printf(" \n sum of even elements are  %d\n",even);
printf(" odd of odd elements are  %d\n ",odd);
return 0;
}
