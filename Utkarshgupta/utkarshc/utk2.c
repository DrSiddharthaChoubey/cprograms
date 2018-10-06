#include<stdio.h>
int main(){
float km,met,feet,inch,cm;
printf("enter distance in km");
scanf("%f",&km);
met=km*1000;
cm=met*100;
inch=cm/2.54;
feet=inch/12;
printf("\n meter=%f \n centimetre=%f\n inches=%f \n feet=%f\n",met,cm,inch,feet);
return 0;}
