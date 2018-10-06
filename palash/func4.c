#include<stdio.h>
void sum(int,int,int,int,int);
void avg(int,int,int,int,int);
int main()
{ int a,b,c,d,e;
  scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
  sum(a,b,c,d,e);
  avg(a,b,c,d,e);
return 0;
}
void sum(int x,int y,int z,int w,int q)
{ int sum;
  
  sum=x+y+z+w+q;
printf("%d",sum);
}
void avg(int x,int y,int z,int w,int q)
{ int average;
   average=(x+y+z+w+q)/5;
  printf("%d",average);
}
   
  
  
