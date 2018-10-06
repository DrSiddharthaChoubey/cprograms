#include<stdio.h>
int main()
{ 
int i,j,n;
printf("enter no");
scanf("%d",&n);     
      for(i=1;i<=100;i++)
{
       for(j=0;j<1;j++)
{
       if(i%j==0)
      
break;
}
      if(i==j)

printf("%d is prime",i);

   return 0;
}
}
