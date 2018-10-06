#include<stdio.h>
void pattern();
int main()
{

printf("pattern");

pattern();
return 0;
}
void pattern()
{
int i,j,n;
printf("enter the no. of rows");
scanf("%d",&n);
for(i=1;i<=n;i++);
{
for(j=1;j<=i;j++);
printf("*");
printf("\n");
}
}

