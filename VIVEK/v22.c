#include<stdio.h>
#include<time.h>

int main(){
double sp , cp,profit;
time_t start,end;
scanf("%lf%lf",&sp,&cp);
time(&start);
profit = sp-cp;
if(profit>0){
printf("the profit is :%fl",profit);
}
else if (profit<0){
printf("the loss is :%fl",profit*-1);
}
else if(profit==0){
printf("No profit No loss");
}

time(&end);
}

