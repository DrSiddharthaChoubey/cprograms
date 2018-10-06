#include<stdio.h>
int main()
{
int i;
printf("enter the no=\n");
scanf("%d",&i);
switch(i==0)
{
case 0:
{
if(i>0)
printf("the no is positive");
else
printf("no is negative");
}
break;
case 1:
printf("the no. is 0");
break;
}
return 0;
}
