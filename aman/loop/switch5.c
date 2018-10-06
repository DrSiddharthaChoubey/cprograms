#include<stdio.h>
int main()
{
int i,j;
printf("enter two no.=");
scanf("%d%d",&i,&j);
switch(i<j)
{
case 0:
printf("%d is greater thn %d",i,j);
case 1:
printf("%d id greater the %d",j,i);
}
return 0;
}

