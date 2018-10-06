#include<stdio.h>
int main(){
int a,b;
printf("enter two no.");
scanf("%d%d",&a,&b);
switch(a>b){
case(0):
printf("greater=%d",b);
break;
case(1):
printf("greater=%d",a);
break;
}
return 0; 
}
