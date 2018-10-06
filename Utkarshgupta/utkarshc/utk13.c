#include<stdio.h>
int main(){
int a,b,c;
printf("enter 3 nos");
scanf("%d%d%d",&a,&b,&c);
if (a>b && a>c)
{ 
 if (b>c)
  printf(" order is no.%d%d%d\n",a,b,c);
 else
printf("order is %d%d%d\n",a,c,b);
}
else if(b>c && b>a){
  if (a>c)
   printf(" order is no.%d%d%d\n",b,a,c);
  else
   printf("order is %d%d%d\n",b,c,a);
}
else if (c>a && c>b){
  if (a<b)
   printf(" order is no.%d%d%d\n",c,b,a);
  else
   printf("order is %d%d%d\n",c,a,b);
}


return 0;}
