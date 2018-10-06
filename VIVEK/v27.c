// amstrom number list
#include<stdio.h>
int main(){
int num ,arm=0,m;

for(num=1;num<=200;num++){
m=num;
while(num!=0){
arm=(num%10)*(num%10)*(num%10)+arm;
num =num/10;
}

}
if(arm==m){
printf("%d",arm);
printf("\nits arm no.");
}
else{
printf("%d",arm);
printf("\n its not arm no.");
}

}
