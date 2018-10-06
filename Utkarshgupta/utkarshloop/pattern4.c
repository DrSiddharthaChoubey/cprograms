#include<stdio.h>
int main(){
int i,j,k,l;
for(i=65;i<=68;i++)
  {
  for(j=65;j<=i;j++)
      printf(" %c",j);
   
  for (k=6;k>=2*(i-65)-1;k--)
      printf(" ");
  for(l=65;l<=i;l++)  
      printf(" %c",l);
printf("\n");
}
}



