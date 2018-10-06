#include<stdio.h>

int main()
{
int i,j,k,l,n,m,o,p;

printf("\nEnter the no. of rows : ");
	scanf("%d",&n);


printf("\nRequired Pattern is : \n");
	for(i=1;i<=n;i++)
	{
		for(j=n;j>i;j--)
			printf("   ");
		for(k=1;k<=i;k++)
			printf(" * ");
		for(l=1;l<i;l++)
			printf(" * ");
			
		for(p=1;j<n;p++)
			printf("   ");
		/*for(m=i;k>1;m--)
			printf(" * ");
		for(o=i;l>1;o--)
			printf(" * ");
		*/
	printf("\n");	
	}
	
return 0;

}
