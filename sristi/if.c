#include<stdio.h>
int main()
{
int a,b,c,big;
printf("enter the value of a,b,c");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
big=a;
if(b>a&&b>c)
big=b;
if(c>a&&c>b)
big=c;
printf("largest=%d",big);
return 0;
}
