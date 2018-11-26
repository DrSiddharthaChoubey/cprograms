#include<stdio.h>
int main()
{
int age;
char ms,gender;
printf("enter the age, marital status and gender");
scanf("%d %c %c",&age,&ms,&gender);
if(ms=='m')
     printf("driver insured");
else 
     {
      if(gender=='m')
        {  
         if(age>30)
          
           printf("driver should be insured");
          
           else
           printf("driver shoul not be insured");
     }
   else
    {
     if(age>25)
     printf("driver should be insured");
     else
     printf("driver should not be insured ");
    }
}
return 0;
}





