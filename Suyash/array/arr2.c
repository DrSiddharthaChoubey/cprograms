/*SELECTION SORTING*/

#include<stdio.h>
#define MAX 100
int main()
{
int i,j,a[MAX],n,temp;

printf("\nEnter the no. of elements you want in array : ");
	scanf("%d",&n);
printf("\nEnter the array of 5 : ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}

printf("\nArray sorted in ascending order is : ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
printf("\n");
return 0;
}
