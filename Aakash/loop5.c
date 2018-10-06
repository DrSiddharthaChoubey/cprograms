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
for(s=1;s<=4;i=i+1){
for(j=1;j<=s;j=j+1){
printf(" ");
}
for(j=4;j>=s;j=j-1){
printf("*");}
for(k=3;k>=i;k=k-1){
printf("*");

}
printf("\n");
}
return 0;
}
