#include<stdio.h>

int  main()
{
	float sum=0.0f;
	int p,i,j,k,n,f,x;
	
	printf("enter the no. of terms & x:");
	scanf("%d %d",&n,&x);
	
	for(i=1;i<=n;i++)
	{
		f=1;
		p=1;
		
		for(j=1;j<=i;j++)
			f*=j;
		
		for(k=1;k<=i;k++)
			p*=x;
		
		sum=sum+p/(float)f;
	}
	
	printf("Series sum is : %f",sum);
	
	return 0;
}
	
