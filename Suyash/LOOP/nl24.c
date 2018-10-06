/*
Required Pattern is : 
 *  *  *  *  *  * 
 *              * 
 *              * 
 *              * 
 *              * 
 *  *  *  *  *  * 

*/#include<stdio.h>

int main()
{
int i,j,k,l,n;

printf("\nEnter the no. of rows : ");
	scanf("%d",&n);


printf("\nRequired Pattern is : \n");
	for(i=1;i<=n;i++)
	{
		if(i==1 || i==n)
		{
			for(j=1;j<=n;j++)
				printf(" * ");
		}
		else
		{
			for(k=1;k<=n;k++)
				if(k==1 || k==n)
					printf(" * ");
				else
					printf("   ");
		}
	
	printf("\n");	
	}
	
return 0;

}
