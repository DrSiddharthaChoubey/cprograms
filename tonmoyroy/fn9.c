#include<stdio.h>
void pattern(int n)
{
 int c,k;
 for (c=1;c<=n;c++)
{
 for(k=1;k<=c;k++){
  printf("*");}
 printf("\n");
}

}

int main(){
int n;
printf("enter no of rows");
scanf("%d",&n);
pattern(n);
return 0;
}

