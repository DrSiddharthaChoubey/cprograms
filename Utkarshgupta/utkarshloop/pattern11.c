#include<stdio.h>
int main(){
int row, col,i,j;
for(i=1;i<=4;i++){
for(j=1;j<=4;j++){
if(i>=2 && i<=3){
if (j==2 || j==3)
printf(" ");
else
printf("#");
}
else
printf("#");}
printf("\n");
}
}

