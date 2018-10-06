#include<stdio.h>
void add();
int main()
{ int x,y;
 scanf("%d%d",&x,&y);
 add();
 return 0;
}
void add()
{ int x,y,z;
  z=x+y;
  printf("%d",z);
}

