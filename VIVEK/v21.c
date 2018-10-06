#include<stdio.h>

int main(){
float ba ,hra ,da,gsal;
scanf("%f",&ba);

if(ba<1500){
da=ba*0.2;
hra=ba*0.1;}
else{
da=ba*0.4;
hra=ba*0.2;
}
printf("hra:%f\nda:%f",hra,da);

return 0;
}

