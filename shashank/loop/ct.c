#include<stdio.h>
   int main()
{
    int i,j,k,l,n;
    printf("Enter the value of row =");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=n;j++)
           printf(" ");
        for(k=1;k<=i;k++)
           {
               if(k==1|| i==n)
               printf("*");
               else
               printf(" ");
             
          }

      for(l=1;l<i;l++)
         {
             if((l==(i-1))||i==n)
                printf("*");
                else
                 printf(" ");
        }
    printf("\n");
}
    return 0;

}
