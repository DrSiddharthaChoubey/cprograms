#include<stdio.h>
int main(){
int i,j,k;
for(i=1;i<=5;i=i+1){
for(j=5;j>=i;j=j-1){
printf(" ");
}
for(j=i;j<=2*i-1;j=j+1){
printf("%d",j);
}
for(j=2*(i-1);j>=i;j=j-1){
printf("%d",j);
}
printf("\n");
}
return 0;
}
