#include<stdio.h>
int main(){
int a,b,c;
printf("enter 3 nos");
scanf("%d%d%d",&a,&b,&c);
if (a>b && a>c)
{ 
 if (b>c){
  printf(" order is no.%d%d%d\n",a,b,c);
     if ((b+c)>a)
        printf("valid");}
 else{
printf("order is %d%d%d\n",a,c,b);
if ((b+c)>a)
        printf("valid");}
}
else if(b>c && b>a){
  if (a>c){
   printf(" order is no.%d%d%d\n",b,a,c);
       if ((a+c)>b)
        printf("valid");}
   
  else{
   printf("order is %d%d%d\n",b,c,a);
      if ((a+c)>b)
        printf("valid");}
}
else if (c>a && c>b){
  if (a<b){
   printf(" order is no.%d%d%d\n",c,b,a);
if ((a+b)>c)
        printf("valid");}
  else{
   printf("order is %d%d%d\n",c,a,b);
        if ((b+a)>c)
        printf("valid");}
}


return 0;}
