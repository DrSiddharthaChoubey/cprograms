#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the value of a,b,c");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("a=%d is the greatest numbber",a);
else if(b>a&&b>c)
printf("b=%d is the greatest number",b);
else if(c>a&&c>b)
printf("c=%d is the greatest number",c);
else
printf("nothing");
return 0;
}
