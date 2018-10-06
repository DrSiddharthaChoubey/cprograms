#include<stdio.h>
int main()
{
int i;
printf("\nenter number");
scanf("%d",&i);
switch(1)
{
 case 1:
      if(i%2==0)
        printf("number is even");
      else
        printf("number is odd");
     break;
 default:
     break;
}
return 0;
}
