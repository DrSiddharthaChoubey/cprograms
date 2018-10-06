#include<stdio.h>
int main(){
int i,j,k;
for(i=65;i<=71;i++){
for(j=65;j<=i;j++){
printf(" %c",j);
for(k=14;k<0;k++){
printf(" ");
break;
}
printf(" %c",j);
}
printf("\n");
}
}

