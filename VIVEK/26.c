// amstrom number 
#include<stdio.h>
int main(){
int num ,arm=0,m;
scanf("%d",&num);
m=num;
while(num!=0){
arm=(num%10)*(num%10)*(num%10)+arm;
num =num/10;
}

if(arm==m){
printf("%d is an arm no.",arm);
}
else{
printf("NO its not");
}
}
