//sum all natural no. b/w 1 & n using while loop 

#include<stdio.h>

int main()
{

int n,i=1,sum=0;
printf("\nEnter no. till you want natural no. to be added : ");
	scanf("%d",&n);

printf("\nSum of nos b/w 1 and %d is : ",n);
	while(i<=n)
	{
		sum+=i;
		i++;
	}

printf("%d\n",sum);
return 0;

}
