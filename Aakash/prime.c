#include<stdio.h>
int main(){
int i,j,k,c;

for(i=1;i<=100;i++){
c=0;
for(j=1;j<=i-1;j++){

if(i%j==0){
c=c+1;}}
if(c==1){
printf("%d\n",i);

}}
return 0;
}


