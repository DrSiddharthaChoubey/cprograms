#include<stdio.h>
void add();
int main ()
{
printf("addition of 2-no");
add();
return 0;
}
void add()
{
int a,b,c;
printf("enter the 2-no.");
scanf("%d%d",&a,&b);
c=a+b;
printf("%d",c);
}


