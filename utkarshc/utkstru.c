#include<stdio.h>
int main(){
//char i;
int i,j;
for(j=7;j>0;j--){
   for (i=72;i<=79;i++)
     if  (i>79)   
      printf(" ");
     else
      printf(" %c",i-j);

   printf("\n");
}
return 0;
} 
