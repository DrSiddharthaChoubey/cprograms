#include<stdio.h>
int main()
{
            int a[10],i,j,n,pos,item;


             printf("\t\nenter the array size\n");
             scanf("%d",&n);
             printf("\t\nenter array elements\n");
                  for(i=0;i<n;i++)
                scanf("%d",&a[i]);
              printf("\nenter the positional item\n");
              scanf("%d",&pos);
               for(i=pos;i<=n-1;i++)
                 a[i-1]=a[i];
                      n=n-1;
              printf("\t\nafter deletion of array\n");
               for(i=0;i<n;i++)
                  printf("%d",a[i]);
        return 0;
          }
