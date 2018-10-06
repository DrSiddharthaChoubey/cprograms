#include<stdio.h>
int main(){
int i,j,k,n,l;
scanf("%d",&n);
for(i=1;i<=n;i++){
for(j=n;j>i;j--)
printf(" ");
for(k=1;k<=1;k++){
if(i==1||i==n)
printf("*");
else
printf(" ");
}
for(l=1;l<i;l++)
{
if((l==i-1)||(i==n))
printf("*");
else
printf(" ");
}
printf("\n");
}}
/*
----










*/
