#include<stdio.h>
int evenodd(int n){

if(n%2==0)
printf("even=%d",n);

else 
printf("odd=%d",n);
}

int main(){
int n;
printf("enter a no.");
scanf("%d",&n);
evenodd(n);
return 0;
}
