#include<stdio.h>
int main(){
int n;
printf("enter a no.");
scanf("%d",&n);
switch(n%2==0){
case(0):
printf("no is odd");
break;
case(1):
printf("no is even");
break;
}
return 0;
}
