#include<stdio.h>
int main(){
char ch;
scanf(" %c",&ch);
if (ch>=65 && ch<=90)
printf("caps\n");
else if (ch>=97 && ch<=122)
printf("smalll\n");
else if (ch>=48 && ch<=57)
printf("digits\n");
else
printf("special characters\n");


   

return 0;}
