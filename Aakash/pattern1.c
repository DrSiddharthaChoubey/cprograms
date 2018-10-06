#include<stdio.h>
int main(){
int i,j,k,l;
for(i=1;i<5;i++){
for(k=1;k<i;k++){
printf(" ");
}
for(j=1;j<=9-(i*2);j++){
printf("%d",j);
}

printf("\n");
}
return 0;
}

