#include<stdio.h>
int p(int);
int main()
{
int n;
printf("Enter no. to check- ");
scanf("%d",&n);
int a=p(n);
if(a==1)
printf("not prime");
else
printf("prime");
return 0;
}
int p(int n)
{int i,j,a;
for(i=2;i<n;i++)
	if(n%i==0)
		return 1;		
return 0;
}
