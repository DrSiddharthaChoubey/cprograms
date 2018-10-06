#include<stdio.h>

int main()
{

int age;

printf("\nEnter your age : ");
	scanf("%d",&age);

	if(age>=18)
	{
		printf("\nYou can vote");	
		printf("\nGo ahead\n");
	}

	else
	{
		printf("\nYou can not vote");
		printf("\nBye....\n");	
	}

return 0;

}
