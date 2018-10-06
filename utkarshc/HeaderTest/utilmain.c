#include<stdio.h>
#include "util.h"
int main(){
int a,b,c,d;
printf("enter a no.");
scanf("%d%d",&a,&b);
c=sub(a,b);
d=add(a,b);
printf("sub=%d\nadd=%d",c,d);
}
