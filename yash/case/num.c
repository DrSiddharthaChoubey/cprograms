#include<stdio.h>
int main()
{
 int n,mod,rev=0;

 printf("Enter the number=");
 scanf("%d",&n);

 while(n>0)
 {
  mod=n%10;
  n=n/10;
  rev=rev*10+mod;
 }
 while(rev>0)
 {
  mod=rev%10;
  rev=rev/10;

  switch(mod)
  {
   case 0:
   printf("\tZero ");
   break;

   case 1:
   printf("\tOne ");
   break;

   case 2:
   printf("\tTwo ");
   break;

   case 3:
   printf("\tThree ");
   break;

   case 4:
   printf("\tFour ");
   break;

   case 5:
   printf("\tFive ");
   break;

   case 6:
   printf("\tSix ");
   break;

   case 7:
   printf("\tSeven ");
   break;

   case 8:
   printf("\tEight ");
   break;

   case 9:
   printf("\tNine ");
   break;
  }
 }
printf("\n");
 return 0;
}
