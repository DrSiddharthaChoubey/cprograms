#include<stdio.h>
int main()
{
int i,n,table;
printf("enter the no=");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
table=n*i;
printf("%d*%d=%d\t",n,i,table);
}
return 0;
}
