#include<stdio.h>
int fact(int n){
int s=1,i;
for(i=1;i<=n;i++){
f=f*i;
}
return f;
}
int main(){
int n,c;
printf("enter no.");
scaf("%d",&n);
c=fact(n);
printf("fact=%d",c);
return 0;
}
