#include<stdio.h>
void pattern(int n){
int i,j;
for(i=1;i<=n;i++){
for(j=1;j<=i;j++){
printf("*");
}
printf("\n");
}

}


int main(){
int n;
printf("Enter no of rows");
scanf("%d",&n);
pattern(n);
return 0;
}





