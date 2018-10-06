#include<stdio.h>
int main()
{
int i,j;
printf("enter the two nos.");
scanf("%d%d",&i,&j);
switch(i>j)
{
case 0:
printf("%d is greater than %d",j,i);
break;
case 1:
printf("%d is greater than %d",i,j);
break;
}
return 0;
}
