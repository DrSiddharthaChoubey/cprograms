#include<stdio.h>
int main(){
float km,m,cm,inch,feet;
printf("Input KM");
scanf("%f",&km);
m=km*1000;
cm=m*100;
inch=cm/2.54;
feet=inch/12;
printf("m:%f\ncm:%f\ninch:%f\nfeet:%f",m,cm,inch,feet);
}
