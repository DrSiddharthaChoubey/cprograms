#include<stdio.h>
int main(){
float cp,sp;
printf("enter cp and sp");
scanf("\n%f\n%f",&cp,&sp);
if (sp>cp){
 printf("profit%f\n",sp-cp);}
else
  printf("loss%f\n",cp-sp);
return 0;}
