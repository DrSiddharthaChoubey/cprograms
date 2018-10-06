/*wap to factorial of the no. enterd through keyboard*/
#include<stdio.h>
int main()
{
int i,n,fact=0;
printf("enter the value of n=");
scanf("%d",&n);
for(i=1;i<=n;i++);
fact=fact*i;
printf("the factorial of %d=%d",n,fact);
}
return 0;
}
