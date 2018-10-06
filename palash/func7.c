#include<stdio.h>
int mul(int,int);
int main()
{int a,b;
 scanf("%d%d",&a,&b);
 mul(a,b);
return 0;
}
int mul(int x,int y)
{ int p=1;
  for(int i=1;i<=y;i++)
    { p=p*x;
     }
  printf("%d",p);
return 0;
}
