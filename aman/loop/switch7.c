#include<stdio.h>
int main()
{
int i;
printf("enter the no.=");
scanf("%d",&i);
switch(i<0)
{
case 0:
if(i==0)
printf("its 0");
else
printf("+ve no.");
break;
case 1:
printf("-ve no.");
break;
}

return 0;
}

