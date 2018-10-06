#include<stdio.h>
int main()
{
int m1,m2,m3,m4,m5,perc;
printf("enter the marks");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
perc=(m1+m2+m3+m4+m5)/5;
if(perc>=60)
  printf("first division");
else if(perc>=50)
 printf("second division");
else if(perc>=40)
 printf("third division");
else
 printf("fail");
return 0;
}
