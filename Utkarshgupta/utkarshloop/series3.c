#include<stdio.h>
int main(){
int i,j,t,x;
float mul,fact,sum=0.0;
scanf("%d",&x);
scanf("%d",&t);
for(i=1;i<=t;i++){
fact=1;mul=1;
for(j=1;j<=i;j++){
fact*=j;
mul=mul*x;}
sum+=(mul/fact);

}
printf("sum is=%.2f",sum);
}
