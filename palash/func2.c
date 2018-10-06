#include<stdio.h>
int add(int,int);
int main()
{ int a,b,sum;
 sum=add(3,4);
  printf("%d",sum);
return 0;
}
int add(int x,int y)
{  return(x+y);
}
