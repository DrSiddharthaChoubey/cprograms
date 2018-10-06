#include<stdio.h>
int main(){
int n;
printf("enter a no.");
scanf("%d",&n);
switch(n>0){
case 0:
printf("no is negative");
break;
case 1:
printf("no is positive");
break;
default:
printf("no is 0");
}
return 0;
}
