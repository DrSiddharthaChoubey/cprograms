#include<stdio.h>
int main()
{
int a,b,c,big;
printf("enter the value of a,b,c");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
if(a>c)
big=a;
else
big=c;
}
printf("largest=%d",big);
return 0;
}
