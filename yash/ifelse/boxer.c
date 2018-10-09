#include<stdio.h>
int main()
{
 int w;

 printf("Enter the weight of the boxer=");
 scanf("%d",&w);

 printf("\n\n\t\t-:BOXER'S WEIGHT CLASS TABLE:-\n\n");
 printf("\t  BOXER CLASS\t\t\tWEIGHT IN POUNDS\n\n");
 printf("\t  Flyweight\t\t\t0-115\n");
 printf("\t  Bantamweight\t\t\t115-121\n");
 printf("\t  Featherweight\t\t\t122-153\n");
 printf("\t  Middleweight\t\t\t154-189\n");
 printf("\t  Heavyweight\t\t\t190 and above\n");

 if(w<115)
 printf("\n\n\t\tBoxer is in flyweight class.\n");

 else if(w>=115 && w<121)
 printf("\n\n\t\tBoxer is in bantamweight class.\n");

 else if(w>=122 && w<153)
 printf("\n\n\t\tBoxer is in featherweight class.\n");

 else if(w>=154 && w<189)
 printf("\n\n\t\tBoxer is in middleweight class.\n");

 else if(w<=190)
 printf("\n\n\t\tBoxer is in heavyweight class.\n");

 return 0;
}
