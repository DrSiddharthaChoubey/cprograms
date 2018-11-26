#include<stdio.h>
int main()
{
int age;
char ms,gender;
printf("enter the age, marital status and gender");
scanf("%d %c %c",&age,&ms,&gender);
if(ms=='m')
     printf("driver insured");
else if (gender=='m' && age>30)
     printf("driver insured");
else if(age>25)
     printf("driver insured");
else
     printf("driver is not insured");
return 0;
}
