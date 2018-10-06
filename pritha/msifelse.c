#include<stdio.h>
int main()
{
int age;
char ms,gender;
printf("enter the age,marital status,gender");
scanf("%d %c %c",&age,&ms,&gender);
if(ms=='m')
  printf("driver insured");
else if(gender=='m'&& age>30)
printf("driver is insured");
else if(age>25)
printf("driver is insured");
else
printf("driver is not insured");
return 0;
}
