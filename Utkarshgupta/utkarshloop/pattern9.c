#include<stdio.h>
int main(){
int i,j,k,l,n;

for(i=1;i<=5;i++){
   n=i;
   for (j=5;j>i;j--)
       printf(" ");
   for(k=n;k<=i;k++){
       printf("%d",n++);}
   for(l=k-1;l<=i;l++)
       printf("%d",l);   
printf("\n");
}

}





