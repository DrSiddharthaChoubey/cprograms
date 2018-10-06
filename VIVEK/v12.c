#include<stdio.h>
int main(){
int a,n,rev=0,m;
scanf("%d",&n);
for(m=1;m<=5;m++){
rev=(rev*10)+(n%10);
n=n/10;
}
printf("%d\n",rev);
}



