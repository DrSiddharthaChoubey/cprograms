#include<stdio.h>
int main()
{int a,b,c,greatest,sum1;
printf("enter the 3 sides of triangle:");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{greatest=a;
sum1=c+b;
}
if(b>a&&b>c)
{greatest=b;
sum1=a+c;
}
if(c>b&&c>a)
{greatest=c;
sum1=b+a;
}
if(greatest>sum1)
{printf("it is invalid triangle");
}
if(greatest<sum1)
{printf("it is valid triangle");
}
return 0;
}
