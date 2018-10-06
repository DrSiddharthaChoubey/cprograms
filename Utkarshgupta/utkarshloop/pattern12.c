#include<stdio.h>
int main(){
int i,j,k,l,n;
printf("enter no. of rows");
scanf("%d",&n);
for(i=1;i<=n;i++){
   
   for (j=1;j<i;j++)
       printf(" ");
   for(k=i;k<=n;k++){
       printf("*");}
   for(l=n-1;l>=i;l--)
       printf("*");   
printf("\n");
}

}





