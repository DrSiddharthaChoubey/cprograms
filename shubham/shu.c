#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the values");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("a is the greatest=%d",a);
else if(b>a&&b>c)
printf("b is the greatest value=%d",b);
else if(c>a&&c>b)
printf("c is the greatest value=%d",c);
return 0;
}
