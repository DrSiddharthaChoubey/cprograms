#include<stdio.h>
int power(int a, int b)
{
int i,p=1;
scanf("%d%d",&a,&b);
for(i=1;i<=b;i++)
p*=a;
return p;
}
int main(){
int a,b,p;
p=power(a,b);
printf("%dthe power of a ^ b",p);
return 0;}

