#include<stdio.h>

int main()
{
	int p=0,n=0,z=0,x;
	char ch='y';
	
	for(;ch=='y'||ch=='Y';)
	{
		printf("Enter the no.: ");
		scanf("%d",&x);
		if(x>0)	
			p++;
		else if(x<0)
			n++;
		else 
			z++;
		printf("Do you want to continue(y/n):");
		scanf(" %c",&ch);
		//if(ch!='y'||ch!='Y')
		//	break;
	}
	printf(" %d positeve \n %d negative \n %d zero",p,n,z);
	return 0;
}
		
		
