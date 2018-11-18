#include<stdio.h>

void cal(int ,int ,int *,int *,int *);
int main()
{
int a,b,sum,pro,dif;

printf("\nEnter a : ");
	scanf("%d",&a);

printf("\nEnter b : ");
	scanf("%d",&b);

	cal(a,b,&sum,&pro,&dif);
	
printf("sum = %d pro = %d dif = %d\n",sum,pro,dif);

return 0;
}

void cal(int a,int b,int *sum,int *pro,int *dif)
{

	*sum=a+b;
	*pro=a*b;
	*dif=a-b;
}
