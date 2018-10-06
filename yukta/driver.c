#include<stdio.h>
int main()
{
int age;
char ms,gender;
printf("enter the age,marital status,gender");
scanf("%d %c %c",&age,&ms,&gender);
if(ms=='m')
           printf("driver Insured");
else
    {
      if(gender=='m')
       {
         if(age>30)
               printf("driver Insured");
          else
               printf("driver Not Insured");
      }
        else
            {
              if(age>25)
                      printf("driver Insured");
              else
                      printf("driver Not Insured");  
            }
      }
return 0;
}









