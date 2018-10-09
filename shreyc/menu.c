#include<stdio.h>
#include<stdlib.h>
int main()
{
int choice,n,i,f;
while(1)
{
printf("\tmenu");
printf("\n 1.factorial\n");
printf("\n 2.prime \n");
printf("\n 3.odd/even\n");
printf("\n 4.exit\n");
printf("\n\nenter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
	f=1;
	printf("enter no.");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		f=f*i;
	printf("factorial of %d=%d",n,f);
	break;
case 2:
	printf("\nenter no.");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	 {
	if(n%i==0)
		break;
	 }
	if(i==n)
		printf("%d is prime no.",n);
	else 
		printf("%d is not prime",n);
	break;
case 3:
	printf("\n enter no.");
	scanf("%d",&n);
	if(n%2==0)
		printf("%d is even no.",n);
	else
		printf("%d is odd number",n);
	break;

case 4:
	exit(0);
default:
	printf("\n invalid option \n");
}
}
return 0;
}
