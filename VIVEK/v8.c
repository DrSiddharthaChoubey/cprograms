#include<stdio.h>
int main(){
int a,n,sum=0;
scanf("%d",&n);
a=n%10;
sum=sum+a;
n=n/10;
a=n%10;
sum=sum+a;
n=n/10;
a=n%10;
sum=sum+a;
n=n/10;
a=n%10;
sum=sum+a;
n=n/10;
a=n%10;
sum=sum+a;
printf("sum of 5 digit:%d",sum);
}



