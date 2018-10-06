#include<stdio.h>
void pattern(int n){
int i,j;
for(i=1;i<=n;i++){
for(j=1;j<=i;j++)
printf("*");

printf("\n");
}
}
int main(){
int r;
printf("enter no. of rows");
scanf("%d",&r);
pattern(r);
} 
