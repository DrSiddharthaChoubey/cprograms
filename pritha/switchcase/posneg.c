#include<stdio.h>
int main()
{
int i;
printf("enter the number");
scanf("%d",&i);
switch(1)
{
case 1:
 if(i>0)
    printf("%d is positive",i);
 else if (i<0)
    printf("%d is negative",i);
 else
    printf("%d is zero",i);
break;
}
return 0;
}
