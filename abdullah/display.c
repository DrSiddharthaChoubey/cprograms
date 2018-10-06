#include<stdio.h>
void display(char ch,int n);
void main()
{
	int n, char ch;
	printf("\n  Enter one character : ");
	scanf("%c",&ch);
	printf("\n  Enter one integer : ");
	scanf("%c",&n);

	display(ch,n);
	
}
	void display(char x,int n)      
	{
		int i;
 		for(i=1;i<=n;i++)
		printf("%c",x);
	}

                                                                    
