#include<stdio.h>
int pattern(int x)
{
  for(int i=0;i<x;i++)
  {
    { for(int j=0;j<=i;j++)
       printf("*");
   }
  printf("\n");
  }
return 0;
}
int main()
{ int n;
   scanf("%d",&n);
  pattern(n);
return 0;
}
