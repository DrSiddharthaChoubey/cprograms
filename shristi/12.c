#include<stdio.h>
int main()
{
int a,b,c,big;
printf("enter the value of a,b,c");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
   big=a;
else if(b>c&&b>a)
   big=b;
else
   big=c;
printf("largest number=%d",big);
return 0;
}
