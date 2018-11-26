/* w a p to count the number of digits in a number*/



#include<stdio.h>
int main()
{
sint n,i,n1,count=0;
printf("enter any number");
scanf("%d",&n);
n1=n;
while(n1>0)
  {
   n1=n1/10;
   count++;
  }
printf("%d is having %d digits",n,count);
return 0;
}
