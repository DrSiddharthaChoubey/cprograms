#include<stdio.h>
int fact(int a)
{
int i,fact=1;
scanf("%d",&a);
for(i=1;i<=a;i++)
fact*=i;
return fact;
}
int main(){
int a;
printf("%dthe factorial of %d ",fact(a),a);
return 0;}

