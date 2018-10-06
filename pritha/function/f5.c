#include<stdio.h>
int evenodd(int);
int main()
{
int num,flag;
printf("enter the number");
scanf("%d",&num);
flag=evenodd(num);
if(flag==1)
 printf("%d is even number",num);
else
printf("%d is odd number",num);
return 0;
}
int evenodd(int n)
{
if(n%2==0)
   return 1;
else
   return 0;
}
