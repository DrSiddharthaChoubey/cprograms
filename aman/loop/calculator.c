#include<stdio.h>
int main()
{
int i,j,k,l,m;
char c;
printf("enter t ur choice=");
scanf("%c",c);
switch(c)
{
case 'a':
printf("enter the nos.=");
scanf("%d%d",i,j);
k=i+j;printf("sum=%d",k);
break;
case 's':
printf("enter the nos.=");
scanf("%d%d",i,j);
k=i-j;printf("difference=%d",k);
break;
case 'm':
printf("enter the nos.=");
scanf("%d%d",i,j);
k=i*j;printf("product=%d",k);
break;
case 'd':
printf("enter the nos.=");
scanf("%d%d",i,j);
k=i/j;printf("division=%d",k);
break;
}
return 0;}




