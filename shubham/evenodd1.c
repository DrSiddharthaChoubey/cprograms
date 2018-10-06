#include<stdio.h>
int evenodd(int);
int main()
{
int a,s;
 printf("enter the value of a");
scanf("%d",&a);
s=evenodd(a)
if(s==1)
printf("%d is a even no",a);
else 
printf("%d is a odd no",a);
return 0;
int evenodd(int n)
{
if(n%2==0)
return 1;
else
 return 0;
}
