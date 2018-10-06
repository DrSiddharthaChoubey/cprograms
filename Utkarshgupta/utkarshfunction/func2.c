#include<stdio.h>
void add(int,int);
int main(){
int x,y,d; 
printf("addition of two nos\n");
scanf("%d%d",&x,&y);
add(x,y);
return 0;
}
void add(int a, int b){
int c;
c=a+b;
printf("sum is%d",c);
}

