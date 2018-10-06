#include<stdio.h>
int main(){
int n,sum=1,mod;
scanf("%d",&n);
n=n+1;
sum=(sum*10000)+(n%10);
n=n/10;
n=n+1;
sum=(sum*10000)+(n%10);
sum=sum+(n%100);
n=n/10;
n=n+1;
sum=(sum*10000)+(n%10);
sum=sum+(n%1000);
n=n/10;
n=n+1;
sum=(sum*10000)+(n%10);
sum=sum+(n%10000);
n=n/10;
n=n+1;
sum=(sum*10000)+(n%10);
printf("%d",sum);
return 0;}

