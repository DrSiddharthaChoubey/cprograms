#include<stdio.h>
#include"add.h"
int main(){
int a,b;
printf("enter two no.");
scanf("%d%d",&a,&b);
printf("sum=%d",add(a,b));
return 0;
}
