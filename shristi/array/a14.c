#include<stdio.h>
#define SIZE1 5
#define SIZE2 5
#define SIZE3 10
int main()
{
int a[SIZE1],b[SIZE2],c[SIZE3],i,j;
printf("enter the element of array a");
for(i=0;i<SIZE1;i++)
scanf("%d"a[i]);

printf("enter the element of array b");
for(j=0;j<SIZE2;j++)
scanf("%d"b[j]);
i=0,j=0,k=0;
while(i<SIZE1 && j<SIZE2)

if(a[i]<b[j])
{
c[k++]=a[i];
i++;
}
else
{
c[k++]=b[j];
j++;
}



































printf("after merging");


























