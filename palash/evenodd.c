#include<stdio.h>
int main()
{int a,n;
scanf("%d",&a);
n=(a/2==0)?1:0;
if(n==1)
{printf("even");
}
if(n==0)
{
printf("odd");
}
return 0;
}
