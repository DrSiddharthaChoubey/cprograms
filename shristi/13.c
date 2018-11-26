#include<stdio.h>
int main()
{
int m1,m2,m3,m4,m5,per;
printf("enter the marks");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
per=m1+m2+m3+m4+m5/5;
if(per>=60)
printf("1st division\n");
else
 {
  if(per>=50)
   printf("second division");
  else
   {
    if(per>=40)
     printf("third division");
    else
     printf("fail");
   }
}
printf("per=%d \n",per);
return 0;
}
