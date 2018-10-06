#include<stdio.h>
int main(){
int i,j,k,l,n=5;

for(i=1;i<=5;i++){
   for (j=5;j>=i;j--)
       printf(" ");
   for(k=5;k>=n;k--){
       printf("%d",k);}
   for(l=k+1;l<5;l++)
       printf("%d",l+1);
          
n--;  
printf("\n");
}

}





