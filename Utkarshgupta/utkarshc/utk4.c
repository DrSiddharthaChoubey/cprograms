#include<stdio.h>
#include<string.h>
int main(){
int n,m,sum=0;
printf("enter no.");
scanf("%d",&n);
sum=n%10;
n=n/1000;
sum=sum+(n%10);

printf("%d\n",sum);

return 0;}
