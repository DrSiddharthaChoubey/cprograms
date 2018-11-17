#include<stdio.h>
int main()
{
 int a[5],i;
 printf("Enter the elements of array--->\n");

 for(i=0;i<5;i++)
 scanf("%d",&a[i]);

 printf("Elements of array=\n");

 for(i=0;i<5;i++)
 { 
  a[i]=a[i]+2;
  printf("\t%d\n",a[i]);
 }

 return 0;
}
