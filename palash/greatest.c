#include<stdio.h>
int main()
{int a,b,c,large;
printf("enter 3 numbers:");
scanf("%d%d%d",&a,&b,&c);
large=(a>b?(a>c?a:c):(b>c?b:c));
printf("greatest=%d",large);
return 0;
}
