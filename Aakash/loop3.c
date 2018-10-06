#include<stdio.h>
int main(){
int i,j,k,s=1,n;
printf("enter no of rows");
scanf("%d",&n);
s=n-1;
for(i=1;i<=n;i=i+1){
for(j=1;j<=s;j=j+1){
printf("*");
s=s-1;}
for(j=1;j<=2*i-1;j=j+1){
printf(" ");}
printf("\n");
}
s=1;
for(i=1;i<=n-1;i=i+1){
for(j=1;j<=s;j=j+1){
printf("*");
s++;
}
for(j=1;j<=2*(n-i);j=j+1){
printf(" ");
}
printf("\n");
}
return 0;
}
