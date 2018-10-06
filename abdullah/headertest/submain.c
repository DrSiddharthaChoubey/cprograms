#include<stdio.h>
#include"sub.h"
int main(){
int a,b;
printf("enter the two number : ");
scanf("%d%d",&a,&b);
printf("subtract = %d",sub(a,b));
return 0;
}
