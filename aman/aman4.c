#include<stdio.h>
int main()
{
int c,d;
printf("write the value of c and d");
scanf("%d%d",&c,&d);
c=c^d;
d=c^d;
c=c^d;
printf("the value of c=%d\nthe value of d=%d",c,d);
return 0;
}

