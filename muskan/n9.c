#include<stdio.h>
int main ()
{

int i,j,n,s;
printf("enter the row and coloum:");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
	for(j=n;j>i;j--)
	printf("  ");
for(s=1;s<=i;s++)
printf("%d ",i);
printf("\n");
}
return 0;
}
