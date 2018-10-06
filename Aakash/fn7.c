#include<stdio.h>
int fact(int n){
int f=1,i;
for(i=1;i<=n;i++){
f=f*i;
}
return f;
}

int main(){
int n,c;
printf("enter a n.");
scanf("%d",&n);
c=fact(n);
printf("factorial=%d",c);
return 0;
}
