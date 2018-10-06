#include<stdio.h>
int main(){
long int n,m,sum=0;
printf("enter no.");
scanf("%ld",&n);
while(n!=0){
sum=sum+(n%10);
n=n/10;
}
printf("%ld\n",sum);

return 0;
}
