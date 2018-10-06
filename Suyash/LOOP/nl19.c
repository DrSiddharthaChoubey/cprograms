/*
          1 
       1  2  3 
    1  2  3  4  5 
 1  2  3  4  5  6  7 
*/

#include<stdio.h>

int main()
{
int i,j,k,l,n,s;

printf("\nEnter the no. of rows : ");
	scanf("%d",&n);


printf("\nRequired Pattern is : \n");
	for(i=1;i<=n;i++)
	{
	s=1;
		for(j=n;j>i;j--)
			printf("   ");
		for(k=1;k<=i;k++)
			printf(" %d ",s++);
		for(l=1;l<i;l++)
			printf(" %d ",s++);
	printf("\n");	
	}
	
return 0;

}
