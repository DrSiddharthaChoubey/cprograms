#include<stdio.h>
int main(){
int i,j,t;
float mul,fact,sum=0.0;
scanf("%d",&t);
for(i=1;i<=t;i++){
fact=1;
for(j=1;j<=i;j++)
fact*=j;
mul=i*i;
sum+=(mul/fact);
}
printf("sum id=%f",sum);
}
