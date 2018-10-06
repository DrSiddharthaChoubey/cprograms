#include<stdio.h>
  int main()
{
   int i,j,n,k,s;
   printf("enter the no. of row=");
    scanf("%d",&n);
   
    for(i=1;i<=n;i++)
      {
       s=1;
       for(j=1;j<i;j++)
          printf(" ");
       for(k=n;k>=i;k--)
          printf("%d",s++);
     
      printf("\n");
     }
   return 0;
 }
