/*wap to find the power of one no. to the poer of other no. if both no. are input using keyboard*/
#include<stdio.h>
int main()
{
int i,a,b,p=1;
printf("enter the value of a & b=");
scanf("%d%d",&a,&b);
for(i=1;i<=b;i++);
p=p*a;
printf("%d^%d=%d",a,b,p);
return 0;
}
