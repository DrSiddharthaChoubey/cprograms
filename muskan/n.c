#include<stdio.h>
int main ()
{

int i,j,n,s;
printf("enter the row and coloum:");
scanf("%d",&n);
s=1;
for(i=1;i<=n;i++)
{
	for(j=1;j<=i;j++)
	printf("%d  ",s++);
printf("\n");

}
return 0;
}
