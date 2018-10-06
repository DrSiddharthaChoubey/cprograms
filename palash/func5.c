#include<stdio.h>
int result(int);
int main()
{ int a;
  scanf("%d",&a);
  result(a);
  return 0;
}
int result(int x)
{ if(x%2==0)
    printf("it is even");
  else
    printf("it is odd");
 return 0;
}
