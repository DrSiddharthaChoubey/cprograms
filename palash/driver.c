#include<stdio.h>
int main()
{int age;
 char ms,gender;
printf("enter marital status/gender/age(for eg if maried male(m/m/23) and if unmarried female(u/f/23):");
scanf("%c/%c/%d",&ms,&gender,&age);
if(ms=='m')
 printf("driver insured");
else
{ if(gender=='m')
   { if(age>=30)
      printf("driver insured");
     else
      printf("driver not insured");
   }
  else
   {if(age>=25)
      printf("driver insured");
     else
      printf("driver not insured"); 
   }
}
return 0;
}



