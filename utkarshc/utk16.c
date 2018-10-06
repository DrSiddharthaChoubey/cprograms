#include<stdio.h>
int main(){
int ch;
scanf(" %d",&ch);
if (ch>=1 && ch<=5)
printf("fine =%f\n",0.5*ch);
else if (ch>=6 && ch<=10)
printf("fine=%d\n",1*ch);
else if (ch>=10 && ch<=30)
printf("fine=%d\n",5*ch);
else
printf("membership cacel\n");


   

return 0;}
