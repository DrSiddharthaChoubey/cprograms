#include<stdio.h>
int main(){
int a,b,c;
printf("enter a,b,c");
scanf("%d\n%d\n%d",&a,&b,&c);
if (a>b){
  if(a>c)
     printf("younger is %d",a);
  else
     printf("younger is%d",c);}
if (b>c){
  if(b>a)
     printf("younger is %d",b);
  else
     printf("younger is%d",a);}
if (c>a){
  if(c>b)
     printf("younger is %d",c);
  else
     printf("younger is%d",b);}
return 0;}
