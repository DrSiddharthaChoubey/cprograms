#include<stdio.h>
int main()
{
int age;
printf("enter your age");
scanf("%d",&age);
if(age>=18)
	{
	 printf("u can vote");
	 printf("\nok\n");
	}
else
	{
	 printf("u cannot vote");
	 printf("\nbye\n");
	}
return 0;
}
