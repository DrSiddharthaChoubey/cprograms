#include<stdio.h>
int main()
{
int n,count=0,n1;
printf("enter the no. ");
scanf("%d",&n);
n1=n;
while(n1>0)
 {
  n1=n1/10;
  count=count+1;
  }
 printf("%d is having %d digits",n,count);
return 0;
}
