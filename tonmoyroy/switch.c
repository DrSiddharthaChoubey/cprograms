#include<stdio.h>
int main(){
int a;
printf("enter a no.");
scanf("%d",&a);
switch(a%2==0){
case(0):
printf("no. is odd");
break;
case(1):
printf("no. is even");
break;
}
return 0; 
}
