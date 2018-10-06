
#include<stdio.h>
int pattern(int x)
{
  for(int i=0;i<x;i++)
   { for(int j=0;j<=i;j++)
       printf("*");
   }
return 0;
}
int main()
{ int n;
  pattern(n);
return 0;
}
