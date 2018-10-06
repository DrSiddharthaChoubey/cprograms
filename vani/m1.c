#include<stdio.h>
int main()
{

int age;
char ms,gen;
printf("the age ");
scanf("%d",&age);
printf("the gen ");
scanf(" %c",&gen);
printf("the married status");
scanf(" %c",&ms);
		if(ms=='m')
				printf("driver is insured");
		else
			{
				if(gen=='m')
					{
						if(age>30)
								printf("driver is insured");
						else
								printf(" driver is no insured");
					}
				else
					{
						if(age>25)
									
								printf("driver is insured");
						else
								printf(" driver is no insured");
					}
			}
return 0;
}
