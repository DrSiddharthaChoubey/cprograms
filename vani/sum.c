#include<stdio.h>
int main()
{
int n,sum=0,a,n1;
printf("\n enter the no. =");
scanf("%d",&n);
n1=n;
			while(n1>0)
				{
				a=n1%10;
				sum=sum+a;
				n1=n1/10;
				}
				printf("%d",sum);
return 0;
}
				
