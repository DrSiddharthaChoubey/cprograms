#include<stdio.h>
int main()
{
int s,n,i,j,k,l;
printf("enter the row ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{

    for(j=n;j>i;j--)
       printf(" ");
    for(k=1;k<=i;k++)

      {
        if((k==1)||(i==n))

           printf("*");
        else
           printf(" ");
}
  for(l=1;l<i;l++)
     {
       if((l==(i-l-1))||(i==n))

           printf("*");
       else
           printf(" ");
}
        
printf("\n");
}
return 0;
}
