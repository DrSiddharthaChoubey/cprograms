#include<stdio.h>
 #include"sub.h"
   int main()
{
  int a,b,c;
   printf("Enter the value of A and B=");
   scanf("%d %d",&a,&b);
  c=sub(a,b);
printf("Sub=%d",c);
 return 0;
}
