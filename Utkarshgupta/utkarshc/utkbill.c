#include<stdio.h>
int main(){
float cost,unit,bill,surcharge;
printf("enter unit consumed\n");
scanf("%f",&unit);
if (unit<=200 ){
cost=100+(0.8*unit);
printf("\nunit=%f\ncost%f",unit,cost);}
else if(unit>200 && unit<=300){
cost=100+(0.9*unit);
printf("\nunit=%f\ncost%f",unit,cost);}
else{
cost=1.15*(100+unit);
printf("\nunit=%f\ncost%f",unit,cost);}


return 0;}




