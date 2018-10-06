#include<stdio.h>
int main()
{
int t1,t2,t3,sum,largest;
printf("enter the three sides of triangle");
scanf("%d%d%d",&t1,&t2,&t3);
if(t1>t2&&t1>t3)
	{
	   if(t2+t3>t1)
		printf("triangle is valid");
	   else
	        printf("triangle is invalid");
	}
if(t2>t1&&t2>t3)
	{
	   if(t1+t3>t2)
		printf("triangle is valid");
	   else
	        printf("triangle is invalid");
	}
if(t3>t2&&t1>t3)
	{
	   if(t1+t2>t3)
		printf("triangle is valid");
	   else
	        printf("triangle is invalid");
	}
return 0;
}

