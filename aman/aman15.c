#include<stdio.h>
int main()
{
int a,b,c;
printf("write the three nos.=");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("greatest no.is=%d",a);
else if(b>a&&b>c)
printf("greatest no.is=%d",b);
else if(c>a&&c>b)
printf("greatest no.is=%d",c);
return 0;
}

