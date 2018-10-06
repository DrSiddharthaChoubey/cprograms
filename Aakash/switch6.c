#include<stdio.h>
int main(){

int n,a,b,c,d,e,f,g;
printf("enter a no");
scanf("%d",&n);
switch(1){
case 1:
a=n/100;
n=n-a*100;
b=n/50;
n=n-b*50;
c=n/20;
n=n-c*20;
d=d/10;
n=n-d*10;
e=n/5;
n=n-e*5;
f=n/2;
n=n-f*2;
g=n;
printf("100=%d 50=%d 20=%d 10=%d 5=%d 2=%d 1=%d ",a,b,c,d,e,f,g); 

}
return 0;
}
