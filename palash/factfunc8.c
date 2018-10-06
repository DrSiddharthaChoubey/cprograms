#include<stdio.h>
int mul(int);
int main()
{int a;
 scanf("%d",&a);
 mul(a);
return 0;
}
int mul(int x)
{ int p=1;
  for(int i=1 ;i<=x;i++)
    { p=p*i;
     }
  printf("%d",p);
return 0;
}
