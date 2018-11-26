#include<stdio.h>
int main()
{
int i;
printf("\n enter the number\n");
scanf("%d",&i);
switch(1)
{
case 1: 
       if(i>0)
       printf("%d is positive",i);
       else
       if(i<0)
       printf("%d is negative",i);
       else
       printf("%d is zero",i);
break;
}
return 0;
}
