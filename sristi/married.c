#include<stdio.h>
int main()
{
int age;
char gender,ms;
printf("enter ms,gender, age");
scanf("%c %c %d" ,&ms,&gender,&age);
if(ms=='m')
   printf("driver insured");
else if(gender=='m'&&age>30)
   printf("driver insured");
else if(age>25)
    printf("driver insured");
else 
    printf("driver is uninsured");
return 0;
}
