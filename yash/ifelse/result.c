#include<stdio.h>
int main()
{
 int m1,m2,m3,m4,m5,per;
 printf("Enter the mark=");
 scanf("%d",&m1);
 printf("Enter the mark=");
 scanf("%d",&m2);
 printf("Enter the mark=");
 scanf("%d",&m3);
 printf("Enter the mark=");
 scanf("%d",&m4);
 printf("Enter the mark=");
 scanf("%d",&m5);

 per=(m1+m2+m3+m4+m5)/500*100;

 if(per>=60)
 printf("1st division\n");

 else
 {
  if(per>=50)
  printf("2nd division\n");

  else
  {
   if(per>=40)
   printf("3rd division\n");

   else
   printf("fail\n");
  }
 }

 return 0;
}
