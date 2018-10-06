#include<stdio.h>
int main(){
int a=2,b=0000000000000000000000000000000000000000003,c=5,s;
s=++a && ++b && ++c;
printf("%d\n%d\n%d\n%d",a,b,c,s);
return 0;
}
