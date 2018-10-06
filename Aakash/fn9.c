#include<stdio.h>
int fact(int k){
int i,f=1;
for(i=0;i<=n;i++){
f=f*i;
}

return f;
}

float power(int k,int n){
int j,p=1;
for(j=1;j<=2;j++){
p=p*n;
}
return p;
}

int main(){
int n,k;
float s=0;
scanf("%d",&n);
for(k=1;k<=n;k++){
s=s+power(k)/fact(k);
}

printf("%f",s);
return 0;
}
