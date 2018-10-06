#include<stdio.h>
int main()
{
int n,i;
printf("\nenter the no. =");
scanf("%d",&n);
i=2;
			while(i<n)
				{if( n%i==0)
				break;
				else
			i++;
				}
if(i==n)
printf("it is prime no,");
else
printf("not a prime");
return 0;
}
				
