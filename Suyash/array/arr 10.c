#include<stdio.h>

#define S1 5
#define S2 5
#define S3 10

int main()
{
int ,i,j,k,a[S1],b[S2],c[S3];

printf("\nEnter elements in array a[5] :");
	for(i=0;i<S1;i++)
		scanf("%d",&a[i]);

printf("\nEnter elements in array b[5] :");
	for(j=0;j<S2;j++)
		scanf("%d",&b[j]);

i=0;j=0;k=0;
	
	while(i<S1 && j<S2)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;k++
		}
		else
		{
			c[k]=b[j];
			j++;k++;
		}
	}
	
	if(i<S1)
	{
		while(i<S1)
			c[k++]=a[i++];	
	}
	
	if(j<S2)
	{
		while(j<S2)
			c[k++]=b[j++];	
	}
	
printf("\nMerged array c[10] is :");
	for(k=0;k<S3;k++)
		printf("%d ",c[k]);

printf("\n");
return 0;	
}
