#include<stdio.h>
int prime(int n){
int a,i,c=0;
for(i=1;i<n;i++){
if(n%i==0)
c=c+1;
}
return c;
}

int main(){
int n,s;
printf("Enter a no.");
scanf("%d",&n);
s=prime(n);
if(s==1){
printf("prime");
}
else
printf("not prime");
return 0;
}
