#include<stdio.h>
int main(){
float basicsal,dn,hall,gross_sal;
printf("input basicsal");
scanf("%f",&basicsal);
dn=basicsal/100*40;
hall=basicsal/100*20;
gross_sal= basicsal+dn+hall;
printf("%f",gross_sal);
 
return 0;
}

