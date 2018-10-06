#include<stdio.h>
int main()
{
float sum=00;
int i,j,k,l,n,a,d,fact=1;

printf("enter the serise no,");
scanf("%d",&n);
for(i=1;i<=n;i++)
fact=fact*i;
for(j=1;j<=i;j++)
d=d*i;
	sum=sum+d/(float)fact;
}
printf("sum of serise=%f",sum);
return 0;
}
