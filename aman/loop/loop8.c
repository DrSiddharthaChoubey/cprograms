/*wap to find sum of all odd nos. b/w 1-n using for loop*/
#include<stdio.h>
int main()
{
int i,n,s=0;
printf("enter the value of n=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%2!=0)
s=s+i;
}
printf("sum=%d",s);

return 0;
}
