#include<stdio.h>
int main()
{
int n,count=0,n1;
printf("\nenter the no. =");
scanf("%d",&n);
n1=n;
			while(n1>0)
				{
				n1=n1/10;
				count++;
				}
				printf("\n%d has %d digit",n,count);
return 0;
}
				
