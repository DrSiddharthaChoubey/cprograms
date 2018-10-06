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
if (i%2!=0)
sum+=(mul/fact);
else
sum-=(mul/fact);

}
printf("sum id=%.2f",sum);
}
