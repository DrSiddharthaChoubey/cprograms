#include<stdio.h>
int main()
{
float a,b,c,d,e,tot,agr,per;
scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
printf("marks in english=%f",a);
printf("marks in maths=%f",b);
printf("marks in hindi=%f",c);
printf("marks in sst=%f",d);
printf("marks in science=%f",e);


tot=(a+b+c+d+e);
agr=tot/5;
per=tot/500*100
printf("the value of aggregate=%f","the value of percentage is=%f",&agr,&per);
return 0;
}
