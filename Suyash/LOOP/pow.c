//power of one no. to another

#include<stdio.h>

int main()
{

int n1,n2,i,pow=1;
printf("\nEnter first no. : ");
	scanf("%d",&n1);

printf("\nEnter second no. : ");
	scanf("%d",&n2);

	for(i=1;i<=n2;i++)
		pow*=n1;

printf("\n%d^%d : %d\n",n1,n2,pow);
return 0;

}
