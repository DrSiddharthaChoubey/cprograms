#include<stdio.h>
int main(){
int i,k,j,l;

for(i=1;i<=4;i++){
for(j=3;j>=i;j--){
printf(" ");
}
for(k=1;k<=((i-1)*2)+1;k++){
printf("*");
}

printf("\n");
}
for(i=1;i<=3;i++){
for(j=1;j<=i;j++){
printf(" ");
}
for(k=1;k<=7-(i*2);k++){
printf("*");
}
printf("\n");
}
return 0;
}

