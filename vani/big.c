#include<stdio.h>
int main()
{
int a,b,c,n;
printf("entet the no.");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{if(a>c)
n=a;
else
n=a;}
else
{if(b>c)
n=b;
else
n=c;
}
printf("the largest=%d",n);
return 0;
}

