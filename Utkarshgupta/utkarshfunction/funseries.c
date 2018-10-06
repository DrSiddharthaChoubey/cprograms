#include<stdio.h>
float fact(int a)
{
float i,fact=1;
for(i=1;i<=a;i++)
fact*=i;
return fact;
}
float power(int a, int b)
{
float i,p=1;
for(i=1;i<=b;i++)
p*=a;
return p;
}
int main(){
float a,i=1;
float sum=0.0;
scanf("%f",&a);
while(i<=a){
sum=sum+(power(i,2)/fact(i));
i++;}
printf("%fthe sum of series ",sum);

return 0;}

