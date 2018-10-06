#include<stdio.h>
int main(){
int i,j,k,s;
for(i=1;i<=5;i=i+1){
for(j=4;j>=i;j=j-1){
printf(" ");
}
for(j=1;j<=i;j=j+1){
printf("*");
}
for(k=1;k<=i-1;k=k+1){
printf("*");
}
printf("\n");
}
for(s=1;s<=4;s=s+1){
for(j=1;j<=s;j=j+1){
printf(" ");
}
for(k=4;k>=s;k=k-1){
printf("*");
}
for(j=3;j>s;j=j-1){

printf("\n");
}

return 0;
}
