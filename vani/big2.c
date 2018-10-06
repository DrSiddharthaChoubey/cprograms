#include<stdio.h>
int main()
{
int a,b,c,n;
printf("entet the no.");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
n=a;
else
if(b>a&&b>c)
n=b;
else 
n=c;
printf("the greater=%d",n);
return 0;
}
