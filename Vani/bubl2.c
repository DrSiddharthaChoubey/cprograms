#define MAX 100
#include<stdio.h>
int main()
{
      int a[MAX],i,j,n,temp;
       printf("\t\nnter array elements\n");
           for(i=0;i<n;i++)
          scanf("%d",&a[i]);
          for(i=0;i<n;i++)
     {
          for(j=0;j<n-i;j++)
    {
           if(a[j]>a[j+1])
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
