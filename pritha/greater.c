#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the three numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf(" a=%d is greater",a);
else if(b>a&&b>c)
printf("b=%d is greater",b);
else
printf("c=%d is greater",c);
return 0;
}




