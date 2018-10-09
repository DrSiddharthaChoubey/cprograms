#include<stdio.h>
int main(0)
{
int a,b,c,big;
printf("enter the value of a,b,c");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
big=a;
if(b>c&&b>c)
big=b;
if(c>a&&c>b)
big=c;
printf("largest no. is:%d",big);
return 0;
}
