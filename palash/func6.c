#include<stdio.h>
int result(int);
int main()
{ int a;
  scanf("%d",&a);
  result(a);
  return 0;
}
int result(int x)
{ 
   int a,b,c,t,f;
    t=x;
   a=x%10;
   x=x/10;
   b=x%10;
   x=x/10;
   c=x;
   f=a*a*a+b*b*b+c*c*c;
   if(t==f)
      printf("it is armstrong number");
   else
     printf("no");
  return 0;
}
