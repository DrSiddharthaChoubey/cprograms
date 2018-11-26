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
              scanf("%d%d",&pos,&item);
               for(i=n-1;i>pos;i--)
                 a[i+1]=a[i];
                 a[i+1]=item;
                      n=n+1;
              printf("\t\nafter inversion of array\n");
               for(i=0;i<n;i++)
                  printf("%d",i);
        return 0;
          }
