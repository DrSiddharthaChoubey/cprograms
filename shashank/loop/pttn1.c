#include<stdio.h>
  int main()
{
  int i,j,n;
  printf("Enter row and column=");
  scanf("%d %d",&n,&n);
   for(i=1;i<=n;i++)
    {
     printf("\t \t");
     for(j=1;j<=n;j++)
         {
            printf("%d",i);
          }
       printf("\n");
     }
    return 0;
} 
  
