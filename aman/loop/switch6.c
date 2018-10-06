#include<stdio.h>
int main()
{
int i;
printf("enter the no.=");
scanf("%d",&i);
switch(i%2==0)
{
case 0:
printf("it is odd");
break;
case 1:
printf("%d is even",i);
break;
}
return 0;
}

