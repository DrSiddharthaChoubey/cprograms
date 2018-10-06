#include<stdio.h>
int main()
{
int c,d;
printf("enter the values of c and d");
scanf("%d%d",&c,&d);
c=c^d;
d=c^d;
c=c^d;
printf("after swapping c=%d,d=%d",c,d);
return 0;
}

