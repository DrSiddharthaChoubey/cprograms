#include<stdio.h>
int main(){
int m1,m2,m3,m4,m5,per;
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
per=(m1+m2+m3+m4+m5)/5;
if(per>=60){
printf("I st division");
}
else if(per<=59&&per>=50){
printf("II st division");
}
else if(per<=49&&per>=40){
printf("III st division");
}
else{
printf("fail");
}
}
