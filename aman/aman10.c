#include<stdio.h>
int main()
{
int t,m,n;
printf("enter the no. b/w 0-100=");
scanf("%d",&n);
t=n%6;
m=n%6;
if(t==0&&m==0)
printf("the no. is divisible by both 4 & 6");
else
("the no. is not divisible by 4&6,or either 4 or 6");
return 0;
}
