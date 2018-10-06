#include<stdio.h>
int main()
{
 int age;
 char g,ms;
 printf("Enter the marital status=");
 scanf("%c",&ms);
 printf("Enter the gender=");
 scanf(" %c",&g);
 printf("Enter the age=");
 scanf("%d",&age);

 if(ms=='m')
 printf("Driver insured\n");

 else if(g=='m' && age>30)
 printf("Driver insured\n");

 else if(age>25)
 printf("Driver insured\n");

 else
 printf("Driver is not insured\n");

 return 0;
}
