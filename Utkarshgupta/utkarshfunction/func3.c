#include<stdio.h>
int add(int,int);
int main(){
int x,y,d; 
printf("addition of two nos\n");
scanf("%d%d",&x,&y);
d=add(x,y);
printf("sum is%d",d);
return 0;
}
int add(int a, int b){
int c;
c=a+b;
return(c);
}

