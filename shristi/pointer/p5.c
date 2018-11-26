#include<stdio.h>
void calc(int,int,int*,int*,int*);
int main()
{
int a,b,add,mul,sub;
printf("enter the value of a and b");
scanf("%d %d",&a,&b);

calc(a,b,&add,&sub,&mul);
printf("addition =%d",add);
printf("substraction=%d",sub);
printf("multiplication=%d",mul);
return 0;
}
void calc(int a,int b,int *add, int *sub, int *mul)
{
*add=a+b;
*sub=a-b;
*mul=a*b;
}
















