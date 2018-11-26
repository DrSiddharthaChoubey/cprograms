#include<stdio.h>
int main()
{
int a[5],i,j,temp;
printf("\t\nenter array elements\n");
for(i=0;i<4;i++)
scanf("%d",&a[i]);
for(i=0;i<4;i++)
{
for(j=0;j<4-i;j++)
{
if(a[j]>a[j+i])
{ 

    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
  }
 }
}

printf("\t\nsorted array\n");
for(i=0;i<5;i++)
printf("%d",a[i]);
return 0;
}
