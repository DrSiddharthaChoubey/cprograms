#include<stdio.h>
int main()
{
float cp,sp,p;
printf("the cp and  sp of item are in respective order");
scanf("%f%f",&cp,&sp);
p=cp-sp;
if(p>0)
{
printf("loss=%f",p);
}
else
{
printf("profit=%f",p);
}
return 0;
}
