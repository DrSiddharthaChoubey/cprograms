#include<stdio.h>
int main()
{
int i,j;
printf("enter the nos=\n");
scanf("%d",&i);
switch(i%2==0)
{
case 0:
printf("the no is odd");
break;
case 1:
printf("the no. is even");
break;
}
return 0;
}
