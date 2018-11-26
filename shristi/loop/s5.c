#include<stdio.h>
int main()
{
int i;
printf("enter any number");
scanf("%d",&i);
switch(1)
{
 case 1:
{
 if(i>0)
 printf("%d is positive number",i);
 else if(i<0)
 printf("%d is negative number",i);
 else if(i=0)
 printf("%d is zero",i);
}
}
return 0;
}






















