#include<stdio.h>
int main()
{
int age;
char gender,ms;
printf("enter ms,gender, age");
scanf("%c %c %d" ,&ms,&gender,&age);
if(ms=='m')
	printf("driver is insured");
else
{ 
	if(gender=='m')
	{
	  if(age>30)
		printf("driver insured");
	  else
		printf("driver not insured");
	}
	else
	  {
	   if(age>25)
	      printf("driver insured");
	   else
              printf("driver not insured");
          }
}
return 0;
}
	


