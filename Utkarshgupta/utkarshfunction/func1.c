#include<stdio.h>
void add();
int main(){ 
printf("addition of two nos");
add();
return 0;
}
void add(int a, int b){
int c;
scanf("%d%d",&a,&b);
c=a+b;
printf("\nsum is%d",c);
}

