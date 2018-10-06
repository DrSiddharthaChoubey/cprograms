#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the 3 nos.=");
scanf("%d%d%d",&a,&b,&c);
if(a*a*a+b*b*b+c*c*c==100*a+10*b+1*c)
printf("it's amstrong no.");
else
printf("it's not amstrong no.");
return 0;
}
