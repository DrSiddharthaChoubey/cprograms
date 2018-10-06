#include<stdio.h>
int main(){
int a,b,big;
printf("Enter the value of a and b");
scanf("%d%d",&a,&b);
big=a>b?a:b;
printf("%d",big);
}
