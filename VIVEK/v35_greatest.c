#include<stdio.h>
int main(){
int a,b,c,big;
printf("Enter the value of a ,b ,c");
scanf("%d%d%d",&a,&b,&c);
big=((a>b)&&(a>c))?a:((b>a)&&(b>c))?b:c;
printf("%d",big);
}
