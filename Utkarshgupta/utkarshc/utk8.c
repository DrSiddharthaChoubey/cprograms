#include<stdio.h>
int main(){
int ten,fif,hund,mon;
printf("enter no.");
scanf("%d",&mon);
hund=mon/100;
mon=(mon%100);
fif=mon/50;
mon=(mon%50);
ten=mon/10;
mon=(mon%10);
printf("10=%d\n50=%d\n100=%d\n",ten,fif,hund);

return 0;}

