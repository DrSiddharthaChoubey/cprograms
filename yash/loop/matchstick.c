#include<stdio.h>
int main()
{
 int ms=21,u,c;
 printf("\t\t\t\t-:RULES:-\n\n");
 printf("\t\t\t[Do not enter invalid numbers.]\n\n\t\t\t[Number above 4 is invalid.]\n\n\t\t[If you do so, the computer automatically wins.]\n\n\n\n");

 while(ms>=1)
 {
  printf("\tNumber of matchsticks available right now is %d\n\n",ms);
  printf("\t\t\tYour Turn....\n\n\n");
  printf("Pick up the matchstick(s)-(1-4):");
  scanf("%d",&u);

  if(u>4)
  {
   printf("\n\tInvalid Selection\n");
   break;
  }

  c=5-u;
  printf("\t\tComputer's Turn....\n\n\n");
  printf("Computer chooses:%d\n\n\n",c);

  ms=ms-u-c;
  continue;

  if(ms==1)
  break;
 }

 ms--;
 printf("\n\n\t\t\tComputer Wins.\n\n");

 return 0;
}
