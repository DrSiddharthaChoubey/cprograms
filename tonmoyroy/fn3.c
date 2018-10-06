#include<stdio.h>

int add(int,int);
int main(){
int s,a,b;

scanf("%d%d",&a,&b);
s=add(a,b);
printf("sum=%d",s);

return 0;
}

int add(int a,int b){
int c;

c=a+b;
return c;
}

