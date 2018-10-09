#include<stdio.h>
int main()
{
 float i,x=1189,y=841,a;

 for(i=0;i<=8;i++)
 {
  if(x>y)
  {
   printf("A(%.0f) =%.1fmm x %.1fmm and result= %.2fmm^2\n\n",i,x,y,x*y);

   x=x/2;
  }
  else
  {
   printf("A(%.0f) =%.1fmm x %.1fmm and result= %.2fmm^2\n\n",i,x,y,x*y);

   y=y/2;
  }
 }

 return 0;
}
