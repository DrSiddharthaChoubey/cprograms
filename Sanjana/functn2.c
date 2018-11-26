#include<stdio.h>
void add();
int main()
{

add();
return 0;
}

void add()
{
int a,b,c;
printf("enter two no.");
scanf("%d%d",&a,&b);
c=a+b;
printf("sum is %d",c);
}

