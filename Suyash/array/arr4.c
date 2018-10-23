/*INSERTION	 SORTING*/

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
	
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}

printf("\nArray sorted in ascending order is : ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
printf("\n");
return 0;
}
