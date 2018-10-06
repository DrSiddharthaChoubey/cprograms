#include<stdio.h>
int main(){
int n,m,sum=0;
printf("enter no.");
scanf("%d",&n);

sum=sum+(n%10);
n=n/10;
sum=sum+(n%10);
n=n/10;
sum=sum+(n%10);
n=n/10;
sum=sum+(n%10);
n=n/10;
sum=sum+(n%10);
n=n/10;

printf("%d\n",sum);

return 0;}
