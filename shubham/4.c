#include<stdio.h>
int add(int,int);
int main()
{
int a,b,c;
printf("enter the value of a and b\n");
scanf("%d%d",&a,&b);
c=add(a,b);
printf("sum=%d\t",c);
return 0;
}
int add(int x,int y)
{
int z;
z=x+y;
return(z);
}
