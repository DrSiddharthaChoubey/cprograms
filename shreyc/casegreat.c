#include<stdio.h>

int main()
{
int a,b;
printf("enter the value of a and b");
scanf("%d%d",&a,&b);

switch(a>b)

{
case 1:
printf("a is greater than b");
break;
case 0:
printf("b is greater than a");
break;
}
return 0;
}
