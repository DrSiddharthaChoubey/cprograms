//sum all even no. b/w 1 & n using while loop 

#include<stdio.h>

int main()
{

int n,i=1,sum=0;
printf("\nEnter no. till you want odd nos. to be added : ");
	scanf("%d",&n);

printf("\nSum of odd nos b/w 1 and %d is : \n",n);
	while(i<=n)
	{
		if(i%2!=0)
			sum+=i;
		i++;
	}

printf(" %d\n",sum);
return 0;

}
