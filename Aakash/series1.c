#include<stdio.h>
int main(){
int i,j,k,p,f,n;
float sum=0.0;
printf("enter no of terms");
scanf("%d",&n);
for(i=1;i<=n;i++){
if(i%2==0){
f=1;
p=1;
for(j=1;j<=i;j++){
f=f*j;
}
for(k=1;k<=i;k++){
p=p*i;
}
sum=sum-p/(float)f;
}
else 
f=1;
p=1;
for(j=1;j<=i;j++){
f=f*j;
}
for(k=1;k<=i;k++){
p=p*i;
}
sum=sum+p/(float)f;

}
printf("%f",sum);
return 0;
}

