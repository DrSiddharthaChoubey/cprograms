#include<stdio.h>
int main(){
int n,m;
char sum[3];
printf("enter no.");
scanf("%d",&n);
while(n!=0){
sum*strcat(n%10);
n=n/10;
}
printf("%s\n",sum);

return 0;}
