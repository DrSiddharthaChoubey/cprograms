#include<stdio.h>

int main()
{
	int ch,n;
	do
	{
		printf("\n\n\n\n\t MENU");
		printf("\n 1. Factorial");
		printf("\n 2. Prime");
		printf("\n 3. Odd/Even");
		printf("\n 4. Exit");
		printf("\n\n Enter your choice:");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: 
				printf("\n\n\n Enter the no.:");
				scanf("%d",&n);
				int p=1;
				for(int i=1;i<=n;i++)
					p*=i;
				printf("\n Factorial of %d is: %d",n,p);
				break;
			case 2:
				printf("\n\n\n Enter the no.:");
				scanf("%d",&n);
				for(int i=2;i<n/2;i++)
				{
					if(n%i==0)	
					{
						printf("\n Not a prime no.");
						continue;
					}
				}
				printf("\n It is a prime no.");
				break;
			case 3:
				printf("\n\n\n Enter the no.:");
				scanf("%d",&n);
				if(n%2==0)	
					printf("No. is even");
				else
					printf("No. is odd");
				break;
			case 4:
				printf("\n Exiting...\n");
				break;
			default:
				printf("\n Invalid option\n");
		}
	}while(ch!=4);
	
	return 0;
}
				
			
