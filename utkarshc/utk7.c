#include<stdio.h>
int main(){
int n,m,rev=0;
printf("enter no.");
scanf("%d",&n);
m=n;
while (m!=0){
rev=(rev*10)+(m%10);
m=m/10;
}
 (rev==n) ? printf("\nit is a palindrome\n"):printf("\nit i s not a palindrome\n");

return 0;}
