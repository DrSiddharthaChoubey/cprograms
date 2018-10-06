#include<stdio.h>
#include"sub.h"
int main()
{
int a,b,c;
printf("enter the value of a and b");
scanf("%d%d",&a,&b);
c=sub(a,b);
printf("sub=%d",c);
return 0;
}
