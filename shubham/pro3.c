#include<stdio.h>
int main()
{
int age;
char ms,g;
printf("enter the ms,gender,age of driver");
scanf("%c %c %d",&ms,&g,&age);
if(ms=='m')
	printf("the driver is immediately insured");
else if(g=='m'&& age>30)
       printf("the male can be insured");
else if(age>=25)
    printf("the female is insured");
else
    printf("u are not insured"); 
return 0;
}
