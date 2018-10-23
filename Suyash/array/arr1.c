#include<stdio.h>
int main()
{
int a[7],i,count=0,flag=0,iteam=0;
printf("\nEnter the element array : ");
	
	for(i=0;i<7;i++)
		scanf("%d",&a[i]);

printf("array are ");
	for(i=0;i<7;i++)
	{
		scanf("%d",&iteam);
		
		if(a[i]=iteam)
		{
			flag=1;
			count++;
		}
	if(flag==1)
		printf("no. %d fount %d",count,iteam);
	else
		printf("not found");
		
return 0;
}
