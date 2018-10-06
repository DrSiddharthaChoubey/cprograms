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
else
{
if(b>c)
big=b;
else
big=c;
}
printf("the largest of all of them=%d",&big)
return 0;
}
